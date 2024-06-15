Link = https://leetcode.com/problems/reverse-integer/

// Solution

class Solution {
public:
/* My Solution*/
    int reverse(int num) {
        int reverse =0;
        int max = pow(2,31)-1;
        int min = pow(-2,31);
        while(num!=0){
            int digit = num%10;
            if(reverse>max/10 || reverse<min/10)
                return 0;
            reverse = reverse*10 +digit;
            num = num/10;                                    
        }
        return reverse;
    }
};

// Time Complexity = O(log N)
