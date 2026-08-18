class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if (k == nums.size()) {
            return *max_element(nums.begin(), nums.end());
        }
        if (k == 1) {
            unordered_map<int, int> m;
            for (auto& i : nums) {
                m[i]++;
            }

            int ans = INT_MIN;
            for (auto& i : m) {
                if (i.second == 1) {
                    ans = max(ans, i.first);
                }
            }
            return ans == INT_MIN ? -1 : ans;
        }
        unordered_map<int, int> m;
        for (int i = 0; i + k <= nums.size(); i++) {
            for (int j = i; j < i + k; j++) {
                m[nums[j]]++;
            }
        }
        int ans = INT_MIN;
        for (auto& i : m) {
            if (i.second == 1) {
                ans = max(ans, i.first);
            }
        }
        return ans == INT_MIN ? -1 : ans;
    }
};