class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int pos=1;
        while(n>0 || m>0) {
            if(n%2 != m%2) {
                return pos;
            }
            pos++;
            n=n>>1;
            m=m>>1;
        }
        return -1;
    }
};
