Problem link: https://www.hackerrank.com/challenges/crush/problem?isFullScreen=true
//---------------------------------------------------Solution-------------------------------------------------------------------//
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long>answer(n,0);
    for(int i=0;i<queries.size();i++){
        //For each query, the value specified in the query is added to the element at the start index minus one (to adjust for 1-based indexing) in the 'answer' vector.

        answer[queries[i][0]-1]+=queries[i][2];
        if(queries[i][1] < n) 
        //If the end index of the query is less than 'n', the value specified in the query is subtracted from the element at the end index in the 'answer' vector. This step ensures that the effect of adding the value is limited to the specified range.
            answer[queries[i][1]] -=queries[i][2]; 
    }
    long max =0;
    long sum =0;
    for(int i=0;i<n;i++){
        sum+=answer[i];
        if(max<sum){
            max=sum;
        }
    }
    return max;
    
}

//---------------------------------------------------------Approach _-----------------------------------------------------------//

The algorithm used in the code is a simple prefix sum algorithm. 
Here is a step-by-step explanation of the algorithm:

1. Initialize an answer vector of length n, with all elements set to 0.
2. Iterate over the queries in the order they are given.
        a. For each query, add the specified value to the element at the start index minus one in the answer vector.        
        b. If the end index of the query is less than n, subtract the specified value from the element at the end index in the answer vector.
3. Initialize two variables: max and sum.
4. Iterate over the answer vector.
        a. For each element in the answer vector, add it to the sum variable.
        b. If the sum variable is greater than the max variable, update the max variable to the value of the sum variable.
5. Return the max variable.
This algorithm is very efficient, as it only needs to iterate over the array once to calculate the prefix sum. It is also very versatile, as it can be used to solve a variety of problems involving array manipulation.