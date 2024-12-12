Link:- https://www.geeksforgeeks.org/problems/insertion-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort

//Solution:
class Solution {
  public:
    // Please change the array in-place
    void insertion(vector<int>& arr, int i, int n){
        if(i==n) return ;
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]= temp;
            j--;
        }
        insertion(arr, i+1, n);
    }
    
    void insertionSort(vector<int>& arr) {
        // code here
        int i =0;
        int n = arr.size();
        insertion(arr, i, n);
    }
};

// Time Complexity: O(N^2)
