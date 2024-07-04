class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> v;

        long long max = arr[n - 1];

        // We start traversing the array from last element.
        for (long long i = n - 1; i >= 0; i--) {
            // Comparing the current element with the maximum element stored.
            // If current element is greater than max, we add the element.
            if (arr[i] >= max) {
                // Updating the maximum element.
                max = arr[i];
                // Storing the current element in vector for leaders.
                v.push_back(max);
            }
        }
        // Finally reversing the vector in which leaders are stored.
        reverse(v.begin(), v.end());
        // returning the vector.
        return v;
    }
};
