// User function Template for C++

class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int cntx=0,cnty=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x)cntx++;
            if(arr[i]==y)cnty++;
            
        }
        if(cntx==cnty)
        return min(x,y);
        if(cntx> cnty)
        return x;
        else
        return y;
        // code here
    }
};
