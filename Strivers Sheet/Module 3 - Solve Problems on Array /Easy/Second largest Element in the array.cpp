Link:-https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

--------------------------------------------------------------------Solution-----------------------------------------------------------------------------------
-------------------------------------------------------------------Brute Force---------------------------------------------------------------------------------
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int largest = arr[n-1],sLargest = -1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]!=largest){
                sLargest = arr[i];
                break;
            }
        }
        return sLargest;
    }
};

//Time Complexity = O(NlogN + N)

-------------------------------------------------------------Better Solution----------------------------------------------------------------------------------
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int largest = -1, sLargest = -1;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        for(int i =0;i<n;i++){
            if(arr[i]>sLargest && arr[i]!=largest){
                sLargest = arr[i];
            }
        }
        return sLargest;
    }
};

//Time Complexity = O(N) +O(N) = O(2N)

--------------------------------------------------------------Optimal Solution----------------------------------------------------------------------------
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int largest = arr[0], sLargest = -1;
        for(int i =1;i<n;i++){
            if(arr[i]>largest){
                sLargest = largest;
                largest = arr[i];
            }else if(arr[i]<largest && arr[i]>sLargest){
                sLargest = arr[i];
            }
        }
        return sLargest;
    }
};

//Time Complexity = O(N)
//Space Complexity = O(1)
