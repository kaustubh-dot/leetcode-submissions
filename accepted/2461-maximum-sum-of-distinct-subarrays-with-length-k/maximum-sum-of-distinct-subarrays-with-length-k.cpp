class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int low = 0;
        int high = k - 1;
        long long sum = 0;
        long long ans = 0;
        for (int i = 0; i <= high; i++) {
            m[nums[i]]++;
            sum += nums[i];
        }
        if (high + 1 - low == m.size()) {
            ans = max(sum, ans);
        }
        while (high < nums.size()) {
            low++;
            m[nums[low - 1]]--;
            if (m[nums[low - 1]] == 0) {
                m.erase(nums[low - 1]);
            }
            sum -= nums[low - 1];
            if (high + 1 >= nums.size())
                break;
            high++;
            m[nums[high]]++;
            sum += nums[high];
            if (high + 1 - low == m.size()) {
                ans = max(sum, ans);
            }
        }
        return ans;
    }
};