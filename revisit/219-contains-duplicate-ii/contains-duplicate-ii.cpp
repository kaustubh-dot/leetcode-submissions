class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int low = 0;
        int high = 0;
        int n = nums.size();
        while (high < n) {
            m[nums[high]]++;
            if (m[nums[high]] > 1) {
                return true;
            }
            if (high - low >= k) {

                m[nums[low]]--;
                if (m[nums[low]] == 0) {
                    m.erase(nums[low]);
                }
                low++;
            }
            high++;
        }
        return false;
    }
};