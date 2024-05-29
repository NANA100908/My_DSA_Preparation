/*Problem Statement
Suggest Edit
Data type refers to the type of value a variable has and the way the computer interprets it. Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte


You’re given a data type. Print its size in bytes.
Example :
Input: Long
Output: 8

Explanation: The size of a Long variable is given as 8 bytes.

Sample Input 1:
Long
Sample Output 1:
8
Explanation Of Sample Input 1 :
The size of a Long variable is given as 8 bytes.

Sample Input 2:
Float
Sample Output 2:
4

Explanation Of Sample Input 2 :
The size of a Float variable is given as 4 bytes.

Expected Time Complexity :
The expected time complexity is O(1).
Constraints :
‘type’ is one of the data types given above.

Time limit: 1 second
  */

// Code:
int dataTypes(string type) {
	// Write your code here
	int a;
	if(type == "Integer")
		a=4;
	else if(type == "Long")
		a=8;
	else if(type == "Float")
		a=4;
	else if (type == "Double")
		a=8;
	else if (type == "Character")
		a=1;
	
	return a;
}


