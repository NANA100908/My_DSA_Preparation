N to 1 without loop

Problem Statement
Suggest Edit
You are given an integer ‘n’.


Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.


Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘n’ to ‘1’ is [5, 4, 3, 2, 1].
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
5
Sample Output 1 :
5 4 3 2 1
Explanation Of Sample Input 1:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘5’ to ‘1’ is [5, 4, 3, 2, 1].
Sample Input 2:
2
Sample Output 2:
2 1
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 2 1

Explanation: An array containing integers from ‘2’ to ‘1’ is [2, 1].
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Expected Space Complexity:
The expected space complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^4

Time Limit: 1-sec


//-------------------------------------------------------------------Solution---------------------------------------------------------//

void print(vector<int> &ans, int n){
    if(n<1) return;
    ans.push_back(n);
    print(ans,n-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;

    print(ans,x);
    return ans;
}



//--------------------------------------------------------------Explanation-------------------------------------------------------//

The following is a step-by-step explanation of how the code works to print the numbers from 1 to x:

1. The print() function is called with ans and x as the arguments.
2. The if statement checks if x is less than 1. If it is, the function returns.
3. Otherwise, the following steps are performed:
      A). The number x is pushed to the back of ans.
      B). The print() function is called recursively with ans and x-1 as the arguments.
      C). When the print() function returns, the printNos() function returns ans.
4. The output of the code is a vector of integers that contains the numbers from 1 to x.
