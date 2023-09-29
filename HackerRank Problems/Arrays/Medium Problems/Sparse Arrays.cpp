Problem Link: https://www.hackerrank.com/challenges/sparse-arrays/problem?isFullScreen=true

//------------------------------------------------------------------------Solution----------------------------------------------------------------------------//
vector<int> matchingStrings(vector<string>& stringList, vector<string>& queries) {
  """
  Counts the number of times each query string appears in the given list of strings.

  Args:
    stringList: A list of strings.
    queries: A list of query strings.

  Returns:
    A list of integers, where each integer represents the number of times the
    corresponding query string appears in the given list of strings.
  """

  // Create a list to store the results.
  vector<int> result;

  // Iterate over the query strings.
  for (const string& query : queries) {

    // Initialize the count for the current query string.
    int count = 0;

    // Iterate over the list of strings.
    for (const string& string : stringList) {

      // Check if the current query string matches the current string.
      if (query == string) {

        // Increment the count for the current query string.
        count++;

      }

    }

    // Append the count to the result list.
    result.push_back(count);

  }

  // Return the result list.
  return result;
}


