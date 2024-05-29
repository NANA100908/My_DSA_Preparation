// Question Link - https://www.geeksforgeeks.org/problems/count-digits5716/1

// Solution

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int num = N;
        int cnt =0;
        while(num>0){
            int temp = num %10;
            if(temp>0 && N % temp == 0){ // needed to exclude 0 otherwise there was floating point exception 
                cnt++;
            }
            num = num/10;
        }
        return cnt;
    }
};

// Time complexity - O(log N)
// Space Complexity - O (1)
