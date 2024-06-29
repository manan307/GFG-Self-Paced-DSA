//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    vector<int> solve(int N, vector<int>& a) {
        vector<int> result;
        
        // Step 1: Find the repeating and missing numbers
        int repeating = -1;
        int missing = -1;
        
        for (int i = 0; i < N; ++i) {
            int index = abs(a[i]) - 1; // Use 'a' instead of 'A'
            
            if (a[index] > 0) {
                a[index] = -a[index];
            } else {
                repeating = abs(a[i]);
            }
        }
        
        for (int i = 0; i < N; ++i) {
            if (a[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        
        // Prepare result
        result.push_back(repeating);
        result.push_back(missing);
        
        return result;
    }
};




//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    
    vector<int> a(1000001);
    
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        Solution sol;
        vector<int> res = sol.solve(n, a);
        
        cout << res[0] << " " << res[1] << endl;
    }
    
    return 0;
}

// } Driver Code Ends
