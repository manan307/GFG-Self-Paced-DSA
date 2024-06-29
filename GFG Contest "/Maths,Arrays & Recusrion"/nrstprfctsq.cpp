//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  
    //Function to check if a number is a perfect square.
    bool isPerfectSquare(long long n)
    {
        long long root = sqrt(n);
        return root * root == n;
    }

    //Function to find the nearest perfect square to a given number.
    long long nearestPerfectSquare(long long n)
    {
        long long smaller;
        long long greater;
        
        //Checking if the number is a perfect square.
        if (isPerfectSquare(n) == true)
        {
           smaller = sqrt(n) - 1;
           greater = sqrt(n) + 1;
        }
        else
        {
           smaller = floor(sqrt(n));
           greater = ceil(sqrt(n));
        }
        
        //Returning the nearest per fect square based on the difference.
        if (abs(smaller * smaller - n) < abs(greater * greater - n))
            return smaller * smaller;
        else
            return greater * greater;
    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long n;
        scanf("%lld",&n);
        
        Solution obj;
        long long res = obj.nearestPerfectSquare(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
