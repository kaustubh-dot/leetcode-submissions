class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        for (int len = l; len <= r; len++) {
            int sum = 0;
            int low = 0;
            int high = len - 1;
            for (int i = low; i <= high; i++) {
                sum += nums[i];
            }
            while (high < n) {
                if (sum > 0) {
                    ans = min(ans, sum);
                }
                if (high + 1 == n) {
                    break;
                }
                high++;
                low++;
                sum = sum - nums[low - 1] + nums[high];
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};