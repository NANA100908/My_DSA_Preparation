Question:
Problem Statement
Suggest Edit
You are given an integer ‘n’.


Return an array having “Coding Ninjas” ‘n’ times, without using a loop.


Example:
Input: ‘n’  = 4

Output:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation: “Coding Ninjas” is printed 4 times. 


Sample Input 1:
3


Sample Output 1:
Coding Ninjas Coding Ninjas Coding Ninjas 


Explanation Of Sample Output 1:
“Coding Ninjas” is printed 3 times. 

Sample Input 2:
5


Sample Output 2:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 


Expected Time Complexity:
Try to solve this in O(n).


Expected Space Complexity:
Try to solve this in O(n).


Constraints:
1 <= 'n' <= 10^4

Time Limit: 1 sec



///-----------------------------------------Approach----------------------------------------------------------///
The approach used in the code :

The function printNTimes() first checks if the input value n is equal to 0. If it is, the function returns an empty vector.
Otherwise, the function calls itself recursively with the value n-1. This will print n-1 copies of the string "Coding Ninjas".
The function then appends the string "Coding Ninjas" to the vector of strings that is returned by the recursive call.
This approach is called recursion. Recursion is a technique where a function calls itself. This can be used to solve problems that are recursive in nature, such as printing a string a certain number of times.

////------------------------------------------------Solution------------------------------------------------------////

vector<string> printNTimes(int n) {
	// Write your code here.
	if(n==0) {
		return {};
	}
    vector<string> sum = printNTimes(n-1);
    sum.push_back("Coding Ninjas ");
	return sum;
}
