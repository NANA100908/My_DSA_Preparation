Link - https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

// Solution

class Solution {
  public:
    long long fact(int n){
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> ans;
        for(int i =1;i<=n;i++){
            if(fact(i)<=n){
                ans.push_back(fact(i));
            }
            else{
                break;
            }
        }
        return ans;
    }
};

// TC : O(n^2)
// SC : O(N)
