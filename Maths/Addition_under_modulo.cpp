//Back-end complete function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {   
        long long M = 1000000007; 
        //sum modulo with M
        int answer=((a%M)+(b%M))%M;
        return answer;
    }
};
