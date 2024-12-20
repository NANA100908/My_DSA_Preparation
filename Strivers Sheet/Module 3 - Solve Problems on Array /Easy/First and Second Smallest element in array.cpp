Link:-https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

//Solution
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int smallest = INT_MAX, sSmallest= -1;
        for(int i =0;i<n;i++){
            if(arr[i]<smallest){
                sSmallest = smallest;
                smallest = arr[i];
            }else if(arr[i]!= smallest && arr[i]<sSmallest){
                sSmallest= arr[i];
            }
        }
        if(smallest ==INT_MAX || sSmallest ==INT_MAX){
            vector<int> arr;
            arr.push_back(-1);
            arr.push_back(-1);
            return arr; 
        }else{
            vector<int> arr;
            arr.push_back(smallest);
            arr.push_back(sSmallest);
            return arr;
        }
    }
};

//Time Complexity = O(N)
//It also take care if no smallest and second smallest element exist (i.e.,) all the elements in the array are same
