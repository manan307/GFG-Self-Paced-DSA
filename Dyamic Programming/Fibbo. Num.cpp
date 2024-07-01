//Back-end complete function Template for C++

class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        long long dp[number+1];
     
        //initializing base values in dp.
        dp[0] = 0;
        dp[1] = 1;

        for (int i=2;i<=number;i++)
            //storing value at ith index in dp as sum of two previous values.
            dp[i] = dp[i-1] + dp[i-2];
      
        //returning the nth fibonacci number.
        return dp[number];
    }
};
