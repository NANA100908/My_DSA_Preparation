Link = https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

// Solution:
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans(2,0);
        long long a = A;
        long long b = B;
        while(A > 0 && B > 0){
            if(A > B) A = A % B;
            else B = B % A;
        }
        if(A == 0) ans[1] = B;
        else ans[1] = A;
        ans[0] = (a * b)/ans[1];
        return ans;
    }
};

//Time Complexity = O(log(min(A,B)))
