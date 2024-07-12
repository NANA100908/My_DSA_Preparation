Link - https://leetcode.com/problems/valid-palindrome/description/

// Solution:
class Solution {
private:
    static bool pal(int i, string& s, int n){
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return pal(i+1, s, n);
    }
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove_if(s.begin(),s.end(), [](char c) { return !isalnum(c); }), s.end());
        int n = s.size();
        if(n<1) return true;
        return pal(0, s, n);
    }
};

// TC : O(N)
// SC : O(N)
