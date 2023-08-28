/*
Check Armstrong :
  Problem Statement: You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
Example:
Input: 'n' = 1634
Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

Sample Input 1 :
1
Sample Output 1 :
true

Explanation Of Sample Input 1 :
1 is an Armstrong number as, 1^1 = 1.

Sample Input 2 :
103
Sample Output 2 :
false

Expected Time Complexity:
Try to solve this in O(log(n)). 

Constraints:
1 <= ‘n’ <= 10^9

Time Limit: 1 sec
*/

// Link to this question:  
https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Code:

bool checkArmstrong(int n){
	//Write your code here
	int original =n;
	int temp = n, sum=0;
	int count=0;
	while(temp!=0){
		temp = temp/10;
		count++;
	}
	while(n!=0){
		int digit = n%10;
		sum = sum + pow(digit,count);
		n /=10;
	}
	return (sum==original);
}


 
