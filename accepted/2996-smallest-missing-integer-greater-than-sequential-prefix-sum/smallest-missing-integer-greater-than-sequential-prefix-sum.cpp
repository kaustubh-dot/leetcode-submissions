class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st;
        st.insert(nums[0]);
        int sum = nums[0];
        int ans = nums[0];
        for(int n:nums){st.insert(n);}
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - 1 == nums[i - 1]) {
                sum += nums[i];
                ans = max(ans, sum);
            } else {
                break;
            }
        }
        while (true) {
            if (st.find(ans) == st.end()) {
                return ans;
            } else {
                ans++;
            }
        }
        return ans;
    }
};