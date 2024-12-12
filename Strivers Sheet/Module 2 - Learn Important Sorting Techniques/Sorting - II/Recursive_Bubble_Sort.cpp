Link:- https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort

// Solution:
class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubble(vector<int>& arr, int n){
        if(n==1) return;
        int didSwap =0;
        for(int j =0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                didSwap = 1;
            }
        }
        if(didSwap ==0) return;
        bubble(arr, n-1);
    }
    
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        bubble(arr, n);
    }
};

//Time Complexity : O(N^2) -> worst and Average Case
//                  O(N) -> Best Case
