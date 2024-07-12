Link - https://leetcode.com/problems/reverse-string/description/

// Solution:
class Solution {
private:
    void reverse(vector<char>&s, int start, int n){
        if(start>=n/2) return;
        swap(s[start],s[n-start-1]);
        reverse(s,start+1,n);
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size());
    }
};

// TC : O(N)
// SC : O(N)
