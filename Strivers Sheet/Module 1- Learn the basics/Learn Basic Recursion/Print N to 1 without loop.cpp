Link - https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop

// Solution

class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N == 0) return;
        cout << N << " ";
        printNos(N - 1);
        
        
    }
};

// TC : O(N)
// SC : O(N)
