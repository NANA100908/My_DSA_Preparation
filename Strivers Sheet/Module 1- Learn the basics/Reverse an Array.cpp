Problem Statement

Given an array 'arr' of size 'n'.


Return an array with all the elements placed in reverse order.


Note:
You don’t need to print anything. Just implement the given function.
Example:
Input: n = 6, arr = [5, 7, 8, 1, 6, 3]

Output: [3, 6, 1, 8, 7, 5]

Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5].
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
8
3 1 1 7 4 2 6 11
Sample Output 1:
11 6 2 4 7 1 1 3    
Explanation Of Sample Input 1 :
After reversing the array, it looks like this [11, 6, 2, 4, 7, 1, 1, 3].
Sample Input 2:
4
8 1 3 2
Sample Output 2:
2 3 1 8
Explanation Of Sample Input 2 :
After reversing the array, it looks like this [2, 3, 1, 8].
Expected Time Complexity
Expected time complexity if O(n)
Constraints:
1 <= n <= 10^6
-10^9<= arr[i] <=10^9

//------------------------------------------------------------Solution-------------------------------------------------------------//

  void reverse(vector<int> &nums,int start, int end){
    if(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        reverse(nums,start+1,end-1);
    }
}


vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int start=0, end=n-1;
    reverse(nums,start, end);
    return nums;

}

//-------------------------------------------------------Explanation----------------------------------------------------------//

reverse Function:

  1. Takes a list of numbers, a start position, and an end position.
  2. Swaps the numbers at the start and end positions.
  3. Continues this swapping process for smaller sections of the list until it's fully reversed.

reverseArray Function:

  1. Sets the start and end positions for the entire list.
  2. Calls the reverse function to reverse the entire list.
  3. Returns the reversed list.
