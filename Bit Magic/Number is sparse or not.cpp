//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
    int res = n & (n>>1);
    if(res==0)
        return true;
    return false;
    }
};
