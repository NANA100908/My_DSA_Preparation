Link :- https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/

// Solution
#include <algorithm>
#include <assert.h>
#include <iostream>
#include <vector>
using namespace std;

// Optimize I/O operations
static auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<long long> pref;

    // Check if we can make 'mid' frequency of any element with at most 'k' operations
    bool is_check(int mid, vector<int>& v, int k) {
        for (int i = mid; i <= v.size(); i++) {
            if (i > 0) {
                // Calculate the total cost to make the element at index (i-1) appear 'mid' times
                long long c = v[i-1] * (long long)mid;
                long long c1 = c - pref[i-1];
                
                // If there are elements before (i-mid-1), add their prefix sum
                if (i-mid-1 >= 0) {
                    c1 += pref[i-mid-1];
                }
                
                // Check if the total cost is within the allowed operations 'k'
                if (k >= c1) {
                    return true;
                }
            }    
        }
        return false;
    }

    // Find the maximum frequency of any element with at most 'k' increment operations
    int maxFrequency(vector<int>& nums, int k) {
        // Sort the array to use prefix sums efficiently
        sort(nums.begin(), nums.end());
        int low = 0, high = nums.size(), n = high, ans = 0;

        // Initialize the prefix sum array
        pref.resize(n, 0);
        pref[0] = nums[0];
        
        // Compute the prefix sums of the sorted array
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + nums[i];
        }

        // Binary search for the maximum frequency
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (is_check(mid, nums, k)) {
                low = mid + 1;
                ans = max(ans, mid);
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};


// Time Complexity : O(NlogN)
