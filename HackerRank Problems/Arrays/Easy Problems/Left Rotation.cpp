Problem Link: https://www.hackerrank.com/challenges/array-left-rotation/problem?isFullScreen=true

//--------------------------------------------------------Solution------------------------------------------------------------//
Approach 1: Simple Brute Force Approach 
vector<int> rotateLeft(int d, vector<int> arr) {
  """
  Rotates the given array to the left by d positions.

  Args:
    d: The number of positions to rotate the array to the left.
    arr: The array to rotate.

  Returns:
    A new array containing the rotated elements of the original array.
  """

  // Create a new array to store the rotated elements.
  vector<int> b;

  // Iterate over the original array, starting at the dth position.
  for (int i = d; i < arr.size(); i++) {
    // Append the current element to the new array.
    b.push_back(arr[i]);
  }

  // Iterate over the original array, from the beginning to the dth position.
  for (int i = 0; i < d; i++) {
    // Append the current element to the new array.
    b.push_back(arr[i]);
  }

  // Return the new array.
  return b;
}

Approach 2: 2 - line solution using inbuilt function

vector<int> rotateLeft(int d, vector<int> arr) {
  // This is an alternative implementation using the `rotate()` function from the
  // standard library.

  // Rotate the array to the left by d positions.
  rotate(arr.begin(), arr.begin() + d, arr.end());

  // Return the rotated array.
  return arr;
  
}