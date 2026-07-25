class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int low = 0;
        if(k==1)return nums;
        int n = nums.size();
        int high = k - 1;
        int good = 0;
        for (int i = 0; i < high; i++) {
            if (nums[i] == nums[i+1]- 1) {
                good++;
            }
        }
        ans.push_back(good == high ? nums[high] : -1);
        while (high < n) {
            low++;
            if (nums[low - 1] == nums[low] - 1) {
                good--;
            }
            if(high+1>=n){
                break;
            }
            high++;
            if (nums[high] == nums[high - 1] + 1) {
                good++;
            }
            ans.push_back(good == k - 1 ? nums[high] : -1);
        }
        return ans;
    }
};