Question:
Problem Statement
Suggest Edit
You are given an integer ‘n’.


Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.


Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.


Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

Sample Input 1:
3


Sample Output 1:
8


Explanation Of Sample Output 1:
We need to find sumOfDivisors(1) + sumOfDivisors(2) +sumOfDivisors(3).
sumOfDivisors(1) = 1
sumOfDivisors(2) = 2 + 1 = 3
sumOfDivisors(3) = 3 + 1 = 4
Therefore, the answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) = 1 + 3 + 4 = 8. 

Sample Input 2:
10


Sample Output 2:
87


Expected Time Complexity:
Try to solve this in O(sqrt(‘n’)).


Constraints:
1 <= ‘n’ <= 3*10^4

Time Limit: 1 sec

/// -----------------------------------Solution-----------------------------------

1st Approach (30/31 Test case passed)

  Solution:

    int sum,allsum=0;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		allsum=allsum+sum;
	}	
	return allsum;


2nd Approach (All Test Case Passed)

  Solution:

    int sum=0;
	for(int i=1;i<=n;i++){
		sum+=(n/i)*i;
	}
	return sum;
