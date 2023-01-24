23-01-2023 (Monday)

/* 
Q1. Find the element that appears once in an array where every other element appears twice.

Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) time & constant extra space.

Example : 

Input:  arr[] = {2, 3, 5, 4, 5, 3, 4}
Output: 2 
*/

Solution:

/*
Brute- Force: check every element if it appears once or not. Once an element with a single occurrence is found, return it. 
Time Complexity: O(n^2)
Auxiliary Space: O(1)
*/

int findSingle(int A[], int N){
    for(int i=0;i<N;i++){
        int count=0;
        for(int j=0;j< N;j++ ){
            if(A[i]==A[j]){
                count++;
            }
            if(count==1){
                return A[i];
            }
        }
        return -1;
    }
}


Better Solution
/* 
Approach: Hashing

Algorithm:
    1. Traverse all elements and put them in a hash table. Element is used as key and the count of occurrences is used as the value in the hash table. 
    2. Traverse the array again and print the element with count 1 in the hash table. 

Time Complexity: O(n) But requires extra space
*/


Best Solution:
/* 
Approach: XOR

Time Complexity: O(n)
Auxiliary Space: O(1)

Idea: 
    1. XOR of a number with itself is 0.
    2. XOr of a number with 0 is number itself.

Example: 

Let ^ be xor operator as in C and C++.
res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
*/

int findSingle(int arr[], int n){
    int res= arr[0];
    for(int i=0;i<n;i++)
        res = res^arr[i];
    
    return res;
}

Another Approaches : 

Approach -1 :
/*
    1. Not an efficient approach
    2. we add each number once and multiply the sum by 2, then subtract the sum of whole array.

    Mathematical Equation = 2*(a+b+c+d) – (a + a + b + b + c + c + d) 
    In more simple words: 2*(sum_of_array_without_duplicates) – (sum_of_array) 

    3. Time Complexity : O(nlogn)
       Auxiliary Space: O(n)
*/

int singleNumber(int nums[], int n){
    map<int ,int> m;
    long sum1=0, sum2 = 0;

    for(int i=0;i<n;i++){
        if(m[nums[i]] ==0){
            sum1 +=nums[i];
            m[nums[i]]++;
        }
        sum2 +=nums[i];
    }

    return 2 * (sum1) - sum2;
}
