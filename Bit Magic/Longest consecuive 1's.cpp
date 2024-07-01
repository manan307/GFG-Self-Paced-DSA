class Solution{
    public:
    int maxConsecutiveOnes(int N){
        int ans=0, count=0;
        while(N>0){
            if(N&1){
                count++;
            }
            else{
                count=0;
            }
            ans=max(ans, count);
            N=N>>1;
        }
        return ans;
    }
};
