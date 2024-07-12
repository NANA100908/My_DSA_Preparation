Link - https://leetcode.com/problems/fibonacci-number/description/

// Solution
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int temp = fibo(n-1)+fibo(n-2);
    n--;
    return temp;
}

class Solution {
public:
    int fib(int n) {
        int ans = fibo(n);
        return ans;
    }
};

// TC: O(N)
// SC: O(N)
