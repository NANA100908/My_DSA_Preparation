24-01-2023 (Tuesday)
/*
Q3. Check if a pair exists with given sum in given array.

Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x. 

Examples: 

Input: arr[] = {0, -1, 2, -3, 1}, x= -2
Output: Yes
Explanation:  If we calculate the sum of the output,1 + (-3) = -2

Input: arr[] = {1, -2, 1, 0, 5}, x = 0
Output: No
*/

Solution:
1.Naive Approach/*
Approach: The basic approach to solve this problem is by nested traversal.

    1. Traverse the array using a loop
    2. For each element:
        a. Check if there exists another in the array with sum as x
        b. Return true if yes, else continue
    3. If no such pair is found, return false.

Time Complexity: O(N^2)
Auxiliary Space: O(1)
*/

2.Sorting and Two-Pointers Technique/*
Approach: The idea is to use the two-pointer technique. But for using the two-pointer technique, the array must be sorted. Once the array is sorted the two pointers can be taken which mark the beginning and end of the array respectively. If the sum is greater than the sum of those two elements, shift the right pointer to decrease the value of the required sum and if the sum is lesser than the required value, shift the left pointer to increase the value of the required sum.

    1. hasArrayTwoCandidates (A[], ar_size, sum)
    2. Sort the array in non-decreasing order.
    3. Initialize two index variables to find the candidate elements in the sorted array. 
        a. Initialize first to the leftmost index: l = 0
        b. Initialize second the rightmost index: r = ar_size-1
    4. Loop while l < r. 
        a. If (A[l] + A[r] == sum) then return 1
        b. Else if( A[l] + A[r] < sum ) then l++
        c. Else r–
    5. No candidates in the whole array – return 0

Time Complexity: O(NlogN), Time complexity for sorting the array
Auxiliary Space: O(1)
*/

bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
    int l, r;
 
    /* Sort the elements */
    sort(A, A + arr_size);
 
    /* Now look for the two candidates in
       the sorted array*/
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else // A[l] + A[r] > sum
            r--;
    }
    return 0;
}

3. Binary Search/*
Approach: Sort the array, then traverse the array elements and perform binary search for (target – a[i]) on the remaining part

Follow the below steps to solve the problem:

1. Sort the array in non-decreasing order.
2. Traverse from 0 to N-1
    a. Initialize searchKey = sum – A[i]
    b. If(binarySearch(searchKey, A, i + 1, N) == True
        A. Return True
3. Return False

Time Complexity: O(NlogN)
Auxiliary Space: O(1)
*/

bool binarySearch(int A[], int low, int high, int searchKey)
{
 
    while (low <= high) {
        int m = low + (high - low) / 2;
 
        // Check if searchKey is present at mid
        if (A[m] == searchKey)
            return true;
 
        // If searchKey greater, ignore left half
        if (A[m] < searchKey)
            low = m + 1;
 
        // If searchKey is smaller, ignore right half
        else
            high = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return false;
}
 
bool checkTwoSum(int A[], int arr_size, int sum)
{
    int l, r;
 
    /* Sort the elements */
    sort(A, A + arr_size);
 
    // Traversing all element in an array search for
    // searchKey
    for (int i = 0; i < arr_size - 1; i++) {
 
        int searchKey = sum - A[i];
        // calling binarySearch function
        if (binarySearch(A, i + 1, arr_size - 1, searchKey)
            == true) {
            return true;
        }
    }
    return false;
}

4. Hashing /*
Approach: This problem can be solved efficiently by using the technique of hashing. Use a hash_map to check for the current array value x(let), if there exists a value target_sum-x which on adding to the former gives target_sum. This can be done in constant time.

unordered_set s

for(i=0 to end)
  if(s.find(target_sum – arr[i]) == s.end)
    insert(arr[i] into s)
  else 
    print arr[i], target-arr[i]
    
Follow the steps below to solve the problem:

1. Initialize an empty hash table s.
2. Do the following for each element A[i] in A[] 
    a. If s[x – A[i]] is set then print the pair (A[i], x – A[i])
    b. Insert A[i] into s.

Time Complexity: O(N), As the whole array is needed to be traversed only once.
Auxiliary Space: O(N), A hash map has been used to store array elements.
*/

void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++) {
        int temp = sum - arr[i];
 
        if (s.find(temp) != s.end()) {
            cout << "Yes" << endl;
            return;
        }
        s.insert(arr[i]);
    }
    cout << "No" << endl;
}