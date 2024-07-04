// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
   long long max_sum = INT_MIN, current_sum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            current_sum = current_sum + arr[i];
            if (max_sum < current_sum)
                max_sum = current_sum;
            if (current_sum < 0)
                current_sum = 0;
        }
        
        return max_sum;
    }
};
