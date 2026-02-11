class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long sum = 0;
        for (int i = 1; i <= n; i += 2) {
            for (int j = 0; j <= n - i; j++) {
                for (int k = j; k < j + i; k++) {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
};