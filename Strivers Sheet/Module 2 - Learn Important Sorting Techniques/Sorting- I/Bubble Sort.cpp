Link:- https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort

// Solution:
class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        for(int i = n-1;i>=1;i--){
            int didSwap =0;
            for(int j = 0;j<=i-1;j++){
                if(arr[j]> arr[j+1]){
                    int temp = arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1] = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0) break;
        }
    }
};

// Time Complexity: O(N^2) - Average Complexity or Worst case
//                  O(N) - Best Case - If array is already sorted and didSwap remains zero
