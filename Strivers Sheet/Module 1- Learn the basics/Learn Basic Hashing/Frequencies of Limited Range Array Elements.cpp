Link :- https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

// Solution: 
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int n, int P) {
        // Modify the elements in the array to mark those out of the given range (1 to N).
        for(int i = 0; i < n; i++) {
            if(arr[i] > n) arr[i] = 0;
        }
      
        // Use elements within the range to increment counts using modular arithmetic.
        for(int i = 0; i < n; i++) {
            if(arr[i] % (n + 1) > 0) 
                arr[(arr[i] % (n + 1)) - 1] += (n + 1);
        }
        
        // Normalize the counts to get the frequency of each element.
        for(int i = 0; i < n; i++) {
            arr[i] /= (n + 1);
        }
    }
};

// Complexity: Time - O(n)
//             Space - O(1)
