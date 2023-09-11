Problem Statement

Check whether a given String 'S' is a palindrome using recursion.


Return true or false.


Note:
You don’t need to print anything. Just implement the given function.
Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
abbba
Sample Output 1:
true
Explanation Of Sample Input 1 :
“abbba” is a palindrome
Sample Input 2:
abcd
Sample Output 2:
false
Explanation Of Sample Input 2 :
“abcd” is not a palindrome.
Constraints:
0 <= |S| <= 10^6
where |S| represents the length of string S.



//--------------------------------------------------------Solution------------------------------------------------------------//
bool pal(string &str, int start, int end){
    if (start >= end) {
        return true;  
    }
    
    if (str[start] != str[end]) {
        return false;  
    }
    
    return pal(str, start + 1, end - 1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int start = 0;
    int end = str.length()-1;
    return pal(str,start,end);
}

//----------------------------------------------------Explanation-----------------------------------------------------------//

pal Function:

  1. Checks if a string is a palindrome (reads the same forwards and backwards).
  2. Takes three parameters: the string, and the start and end indices.
  3. Compares characters at the start and end positions recursively.
  4. If characters match, it continues checking towards the center.
  5. If all characters match, it returns true, otherwise false.

isPalindrome Function:

  1. Wrapper function for checking palindromes.
  2. Initializes start and end positions.
  3. Calls pal function to do the actual palindrome check.
  4. Returns the result obtained from pal.

How it Works:

  1. isPalindrome sets up the initial positions and calls pal.
  2. pal compares characters at start and end recursively.
  3. If all characters match, it's a palindrome and returns true.
  4. If any characters don't match, it's not a palindrome and returns false.
  5. Overall, it checks if a given string is a palindrome using recursion.
