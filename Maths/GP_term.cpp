//Back-end complete function Template for C++

class Solution{
    public:
        
    double termOfGP(int A,int B,int N)
    {
        // common ratio is given by r=b/a
        double r=((double)B)/A; 
        // Nth term is given by a(r^(N-1))
        return (A*pow(r,N-1)); 
    }
};
