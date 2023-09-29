Problem Link: https://www.hackerrank.com/challenges/dynamic-array/problem?isFullScreen=true

//--------------------------------------------------Solution-------------------------------------------------------------//
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
  // Initialize the dynamic array.
  vector<vector<int>> arr(n);

  // Initialize the last answer.
  int last_answer = 0;

  // Iterate over the queries.
  vector<int> ans;
  for (int i = 0; i < queries.size(); i++) {
    int s = queries[i][0];
    int x = queries[i][1];
    int y = queries[i][2];

    if (s == 1) {
      // Calculate the index for the query type 1 query.
      int idx = (x ^ last_answer) % n;

      // Append the value to the vector at the calculated index.
      arr[idx].push_back(y);
    } else if (s == 2) {
      // Calculate the index for the query type 2 query.
      int idx = (x ^ last_answer) % n;

      // Get the value at the calculated index.
      int size = arr[idx].size();
      last_answer = arr[idx][y % size];

      // Append the last answer to the result array.
      ans.push_back(last_answer);
    }
  }

  // Return the result array.
  return ans;
}


//------------------------------------------------------Algorithm--------------------------------------------------------------//
The dynamicArray() function takes two arguments: n, the size of the dynamic array, and queries, a vector of vectors, where each inner vector contains a query type and two integer values.
The function initializes the dynamic array to a vector of vectors of size n, where each inner vector is empty.
The function also initializes the last answer to 0.
The function then iterates over the queries:
    If the query type is 1, the function calculates the index idx using the following formula:
        idx = (x ^ last_answer) % n
    Then, the function appends the value y to the vector at index idx in the dynamic array.
    If the query type is 2, the function calculates the index idx using the same formula as above. Then, the function gets the value at index y % size in the vector at index idx in the dynamic array, where size is the size of the vector at index idx. The function then updates the last answer to the value retrieved.
The function finally returns the vector ans, which contains the last answers for all query type 2 queries.