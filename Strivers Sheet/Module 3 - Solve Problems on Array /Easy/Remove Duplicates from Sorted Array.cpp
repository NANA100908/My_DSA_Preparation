Link:-https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

-------------------------------------------------------------------------Solution------------------------------------------------------------------------------
------------------------------------------------------------------------Brute Force----------------------------------------------------------------------------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k =0;
        set<int> st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            nums[k]=it;
            k++;
        }

        return k;
    }
};

//Time Complexity = O(NlogN+N) 
//Space Complexity =O(N)

-----------------------------------------------------------------------Optimal Solution-----------------------------------------------------------------------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

//Time Complexity = O(N)
//Space Complexity = O(1)
