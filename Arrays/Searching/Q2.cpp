/*
Q2. Find the only repetitive element between 1 to N-1

Given an array of size N filled with numbers from 1 to N-1 in random order. The array has only one repetitive element. The task is to find the repetitive element.

Examples:

Input: a[] = {1, 3, 2, 3, 4}
Output: 3
Explanation: The number 3 is the only repeating element.

Input: a[] = {1, 5, 1, 2, 3, 4}
Output: 1
*/

Solution 

1./* 
Naive Approach: Use two nested loops. The outer loop traverses through all elements and the inner loop check if the element picked by the outer loop appears anywhere else.
     
Time Complexity: O(N^2)
Auxiliary Sace: O(1)
*/

2./* 
Another Approach: Sorting
    Sort the given input array. Traverse the array and if value of the ith element is not equal to i+1, then the current element is repetitive as value of elements is between 1 and N-1 and every element appears only once except one element.

Time Complexity: O(N* log N)
Auxiliary Space: O(1)
*/

3. Better Solution/*
Another Approach: Using hash set
    Use a hash table to store elements visited. If an already visited element appears again, return it.

Time Complexity: O(N)
Auxiliary Space: O(N)
*/

int findRepeating(int arr[], int N)
{
    unordered_set<int> s;
    for (int i = 0; i < N; i++) {
        if (s.find(arr[i]) != s.end())
            return arr[i];
        s.insert(arr[i]);
    }

    // If input is correct, we should
    // never reach here
    return -1;
}

4. Best Solution/*
Approach: Sum of First N elements
    We know sum of first n-1 natural numbers is (N – 1)*N/2. We compute sum of array elements and subtract natural number sum from it to find the only missing element.

Time Complexity: O(N)
Auxiliary Space: O(1)
*/

int findRepeating(int arr[], int N)
{
    // Find array sum and subtract sum
    // first N-1 natural numbers from it
    // to find the result.
    return accumulate(arr, arr + N, 0) - ((N - 1) * N / 2);
}

5. Another Best Approach/*
Approach: Using XOR
    The idea is based on the fact that x ^ x = 0 and if x ^ y = z then x ^ z = y
    
Time Complexity: O(N)
Auxiliary Space: O(1)
*/

int findRepeating(int arr[], int N)
{

    // res is going to store value of
    // 1 ^ 2 ^ 3 .. ^ (N-1) ^ arr[0] ^
    // arr[1] ^ .... arr[N-1]
    int res = 0;
    for (int i = 0; i < N - 1; i++)
        res = res ^ (i + 1) ^ arr[i];
    res = res ^ arr[N - 1];
    return res;
}

6. Another Approach /*
Approach: Indexing
    As there are only positive numbers, so visit the index equal to the current element and make it negative. If an index value is already negative, then it means that current element is repeated
    
Time Complexity: O(N)
Auxiliary Space: O(1)
*/

int findRepeating(int arr[], int N)
{
    int missingElement = 0;

    // indexing based
    for (int i = 0; i < N; i++) {

        int element = arr[abs(arr[i])];

        if (element < 0) {
            missingElement = arr[i];
            break;
        }

        arr[abs(arr[i])] = -arr[abs(arr[i])];
    }

    return abs(missingElement);
}