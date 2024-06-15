Link : https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// Solution
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here 
        long long sum =0;
        for(int i = 1 ; i<=N;i++){
            int temp = N/i;
            sum += (i*temp);
        }
        
        return sum;
    }
};

/* Explaination
suppose we are given N = 5 ,
Now we have to find factors of 1, 2,3,4,5 that will be 
 f1 = 1, f2 = 1 + 2 , f3 = 1 + 3, f4 = 1+2+4, f5 = 1+5, and then we try to sum them so ans will be 
 ans  =  f1 + f2 + f3 + f4 + f5 
      = 1 + (1 + 2) + (1 + 3) + (1 + 2 + 4) + (1 + 5)  // equals  21 
now club alike terms
      = (1x5) + (2x2) + (3x1) + (4x1)+(5x1) // remains 21
now this part does the main trick  and here I will do some rewriting as 
      = (1 x (5/1) ) + (2 x(5/2)) + (3x(5/3)) + (4 x (5/4)) + (5x(5/5))  //still remains 21
# here I am doing floor division so example 3/2 = 1 and 7/3 =2
You can See answer remains same so here is our pattern that for any N 
ans = (1 x (N/1)) + (2 x (N/2)) + (3x(N/3)) + ... + (Nx(N/N)) 
*/
// Time Complexity = O(N)
