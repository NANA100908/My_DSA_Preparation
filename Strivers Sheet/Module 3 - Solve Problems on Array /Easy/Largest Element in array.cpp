Link:- https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

--------------------------------------------------------------------------Solution------------------------------------------------------------------------------
------------------------------------------------------------------------Brute Force-----------------------------------------------------------------------------
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        //Brute Force
        int n = arr.size();
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }
};

//Time Complexity - O(NlogN)
//Space Complexity - O(1)

----------------------------------------------------------------------Optimal Solution-------------------------------------------------------------------------
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        //optimal Solution
        int n = arr.size();
        int largest = arr[0];
        for(int i = 1;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};

//Time Complexity - O(N)
//Space Complexity = O(1)
