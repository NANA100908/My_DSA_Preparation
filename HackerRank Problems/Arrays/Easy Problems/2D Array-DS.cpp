Problem link: https://www.hackerrank.com/challenges/2d-array/problem?isFullScreen=true

//-----------------------------------------------------Solution----------------------------------------------//
int hourglassSum(vector<vector<int>> arr) {
  // Initialize the maximum hourglass sum.
  int max_sum = INT32_MIN;

  // Iterate over the array, starting at the top-left corner.
  for (int i = 0; i < arr.size() - 2; i++) {
    for (int j = 0; j < arr[0].size() - 2; j++) {
      // Calculate the hourglass sum for the current hourglass.
      int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
                arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

      // Update the maximum hourglass sum if necessary.
      max_sum = max(max_sum, sum);
    }
  }

  // Return the maximum hourglass sum.
  return max_sum;
}

//-----------------------------------------------------Algorithm------------------------------------------------//
Algorithm of the code:

1. Initialize the maximum hourglass sum to the smallest possible value (-2147483648 in 32-bit C++).
2. Iterate over the array, starting at the top-left corner.
3. For each cell, calculate the sum of the hourglass formed by the current cell and its six neighbors.
4. Update the maximum hourglass sum if necessary.
5. Return the maximum hourglass sum.