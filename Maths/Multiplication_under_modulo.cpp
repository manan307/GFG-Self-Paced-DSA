//Back-end complete function Template for C++

class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //calculating multiplication modulo
        long long answer=((a%1000000007)*(b%1000000007))%1000000007;
        
        return answer;
    }
};
