//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#define ROWS 901
#define COLS 901
using namespace std;

int mat[901][901]; //globally declaring matrix to avoid redeclaration for each testcase


// } Driver Code Ends
//User function Template for C++


void booleanMatrix(int mat[ROWS][COLS], int m, int n) {
    vector<bool> rowFlag(m, false); // to keep track of rows that contain 1

    // Step 1: Determine which rows need to be filled with 1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                rowFlag[i] = true; // mark the row as containing 1
                break; // no need to check further in this row
            }
        }
    }

    // Step 2: Fill the flagged rows with 1
    for (int i = 0; i < m; i++) {
        if (rowFlag[i]) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = 1;
            }
        }
    }
}

//{ Driver Code Starts.


int main() 
{
	int testcases;
	cin>>testcases; //testcases
	while(testcases--)
	{
	    int m;
	    cin>>m; //number of rows
	    int n;
	    cin>>n; //number of columns
	    
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>mat[i][j]; //inputting the elements of matrix
	            

	   
	   booleanMatrix(mat,m,n);
	   
	   for(int i=0;i<m;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	           cout<<mat[i][j]<<" "; //Just printing the matrix
	       }
	       cout<<endl;
	   }
	   
	  
	   
	}
	return 0;
}
// } Driver Code Ends
