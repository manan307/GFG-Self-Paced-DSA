

const int mxn = 1e9 + 7;
class Solution
{
    public:
    //Function to count the number of different ways in which n can be 
    //written as a sum of two or more positive integers.
    int countWays(int n)
    {
        // your code here
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int lvl = 1;  lvl < n ; lvl++){
            for(int sum = lvl ; sum <= n ; sum ++){
                dp[sum] =  (dp[sum] + dp[sum - lvl])% mxn;
            }
        }
        return dp[n];
        
    }
};
