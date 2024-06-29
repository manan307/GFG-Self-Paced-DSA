//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

long long arr[11000001];


// } Driver Code Ends
//User function Template for C++

long long FindMaxSum(long long arr[], int n) {
    if (n == 0) return 0;
    if (n == 1) return arr[0];

    long long inclUDE = arr[0];
    long long exclUDE = 0;
    long long new_excl;

    for (int i = 1; i < n; i++) {
        new_excl = max(inclUDE, exclUDE);
        inclUDE = exclUDE + arr[i];
        exclUDE = new_excl;
    }

    return max(inclUDE, exclUDE);
}

//{ Driver Code Starts.


/* Driver program to test above function */
int main() 
{ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout<<FindMaxSum(arr,n)<<endl;
    }
return 0; 
}
// } Driver Code Ends
