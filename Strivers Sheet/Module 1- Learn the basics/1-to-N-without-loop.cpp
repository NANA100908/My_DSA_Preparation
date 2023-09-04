Question:
Problem Statement
Suggest Edit
You are given an integer ‘n’.


Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.


Example:
Input: ‘n’ = 5

Output: 1 2 3 4 5

Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].

Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
The array contains all integers from 1 to 5 in ascending order.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
The array contains all integers from 1 to 2 in ascending order.
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^6

Time Limit: 1-sec


  //--------------------------------------------------------------Solution----------------------------------------------------------------------------//

  Approach: This C++ code defines a function `printNos` that generates a vector of integers containing numbers from 1 to a given input `x` using recursion. It maintains a counter `cnt` to keep track of the current number being added to the vector. The recursion continues until `cnt` exceeds `x`, at which point the function returns the vector containing the sequence of numbers.


Code: 
    int cnt=1;
    vector<int> ans;
    vector<int> printNos(int x) {
        // Write Your Code Here
        if(cnt>x){
            return ans;
        }
        else{
            ans.push_back(cnt++);
            return printNos(x);
        }
    }
