class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<long long> &arr) {
        int n = arr.size();

        // We store the sum of all array elements.
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];

        // sum2 is used to store prefix sum.
        long long sum2 = 0;
        for (int i = 0; i < n; i++) {

            // Leaving out the value of current element from suffix sum.
            sum = sum - arr[i];

            // Checking if suffix and prefix sums are same.
            if (sum2 == sum) {
                // returning the index or equilibrium point.
                return (i + 1);
            }

            // Adding the value of current element to prefix sum.
            sum2 = sum2 + arr[i];
        }
        return -1;
    }
};
