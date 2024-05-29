-----------------------------------------------------------------Problem----------------------------------------------------------------------------
Problem Statement
Suggest Edit
Given an integer ‘n’, return first n Fibonacci numbers using a generator function.


Example:
Input: ‘n’ = 5

Output: 0 1 1 2 3

Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
Note:
You don't need to print anything. Just implement the given function.

Sample Input 1:
5
Sample Output 1:
0 1 1 2 3
Explanation Of Sample Input 1:
The first 5 Fibonacci numbers are 0, 1, 1, 2, and 3.
Sample Input 2:
3
Sample Output 2:
0 1 1
Explanation Of Sample Input 2:
The first 5 Fibonacci numbers are 0, 1, 1.
Expected Time Complexity
The expected time complexity is O(n).
Constraints:
1 <= n <= 45
Time Limit: 1 s

-----------------------------------------------------------------Approach/ALgorithm------------------------------------------------------
void fibo(vector<int>&v, int n, int i){
    if(i>=n) return;
    (i<=1)?v.push_back(i): v.push_back(v[i-1]+v[i-2]);
    fibo(v,n,i+1);
}


vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v;
    fibo(v,n,0);
    return v;
}
