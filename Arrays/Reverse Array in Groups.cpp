//Back-end complete function template for C++

class Solution {
  public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long int>& arr, int k) {
        int n = arr.size();
        for (int i = 0; i < n; i += k) {
            // Determine the end point for the current sub-array.
            int end = min(i + k, n);
            // Reverse the sub-array from arr[i] to arr[end - 1].
            reverse(arr.begin() + i, arr.begin() + end);
        }
    }
};
;
