Link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

// Solution 
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int sum =0;
        int num = n;
        while(num>0){
            int last = num%10;
            sum += (last*last*last);
            num = num/10;
        }
        if(sum == n) return "true";
        else return "false";
        
    }
};

// Time Complexity = O(N)
