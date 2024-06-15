Link = https://www.geeksforgeeks.org/problems/prime-number2314/1

// Solution:
class Solution{
public:
    int isPrime(int N){
        // code here
        if(N == 1) return 0;
        else if(N == 0) return 1;
        for(int i =2;i*i<=N;i++){
            if((N%i) == 0) {
                return 0;
            }
        }
        return 1;
    }
};

// Time Complexity = O(sqrt(n))
