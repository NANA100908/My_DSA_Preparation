Link - https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

// Solution
class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n==0) return 0;
        return n*n*n + sumOfSeries(n-1);
    }
};

// TC : O(N)
// SC : O(N)
