Problem Statement

You are given an integer ’n’.


Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.


The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.


Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
7
Sample Output 1 :
1 2 6
Explanation Of Sample Input 1:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 1 2

Explanation: Factorial numbers less than or equal to ‘2’ are ‘1’ and ‘2’.
Expected Time Complexity:
The expected time complexity is O(m), where ‘m’ is the number of factorial numbers which are less than or equal to ‘n’.
Expected Space Complexity:
The expected space complexity is O(m), where ‘m’ is the number of factorial numbers which are less than or equal to ‘n’.
Constraints:
1 <= n <= 10^18

Time Limit: 1-sec


  //---------------------------------------------------Solution------------------------------------------------------//

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    long long fac =1;
    for(int i =1;fac*i<=n;i++){
        fac*=i;
        ans.push_back(fac);
    }
    return ans;
}


//-------------------------------------------------Explanation------------------------------------------------------//

The function factorialNumbers() takes a long long integer n as an argument and returns a vector of all factorial numbers less than or equal to n.

The function first creates an empty vector of long long integers called ans. Then, it initializes a long long integer variable fac to 1.

The function then enters a loop. In each iteration of the loop, the following steps are performed:

  1. The value of fac is multiplied by i.
  2. The value of fac is pushed back to the vector ans.
  3. The value of i is incremented by 1.
  4. The loop continues until the value of fac multiplied by i is less than or equal to n.

Finally, the function returns the vector ans.
