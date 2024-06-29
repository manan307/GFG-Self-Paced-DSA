//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


long long minOperations(long long n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    if(n==3)
    return 2;
    long long total =0;
    if(n%2!=0){
        total=1+min(minOperations(n-1),minOperations(n+1));
    }
    else
    total=1+minOperations(n/2);
    
    return total;
    //Your code here
}

//{ Driver Code Starts.



int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        long long n;
        cin>>n;
        cout<<minOperations(n)<<endl;
        
        
    }
	return 0;
}
// } Driver Code Ends
