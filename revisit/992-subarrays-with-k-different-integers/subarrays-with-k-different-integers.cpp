class Solution {
public:
    int solve(vector<int>& nums, int k) {
        int low = 0, high = 0;
        int count = 0;
        map<int, int> m;
        while (high < nums.size()) {
            m[nums[high]]++;
            while (m.size() > k) {
                m[nums[low]]--;
                if (m[nums[low]] == 0) {
                    m.erase(nums[low]);
                }
                low++;
            }
            count += high - low + 1;
            high++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};