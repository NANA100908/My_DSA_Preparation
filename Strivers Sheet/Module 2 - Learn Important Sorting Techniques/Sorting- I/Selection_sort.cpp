Link: https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

// Solution:

class Solution
{
    public:
    int select(int arr[], int n , int i)
    {
        // code here such that selectionSort() sorts arr[]
        int mini =i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        return mini;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int mini = select(arr,n,i);
           if(mini!=i){
               int temp = arr[mini];
               arr[mini]= arr[i];
               arr[i] = temp;
           }
       }
    }
};

//Time Complexity = O(N^2)
