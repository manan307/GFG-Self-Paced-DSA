//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int toggleTheMiddle(int n)
{
    //Your code here
     if(n == 1) {
        return 0;
    } else if(n == 0) {
        return 1;
    } else {
        int NumberOfBits = floor(log(n)/log(2)) + 1;
        
        if(!(NumberOfBits % 2)) {
            // shift the middle and middle -1 bit
            int Middle = NumberOfBits / 2;
            int before_Middle = Middle - 1;
            
            n = (n ^ (1 << (Middle)));
            n = (n ^ (1 << (before_Middle)));
        } else {
            // shift the middle bit only
            int Middle = NumberOfBits / 2;
            n = (n ^ (1 << (Middle)));
        }
        return n;
    }
}


//{ Driver Code Starts.


int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        
        cout<<toggleTheMiddle(n)<<endl;
        
        
    }
	return 0;
}
// } Driver Code Ends
