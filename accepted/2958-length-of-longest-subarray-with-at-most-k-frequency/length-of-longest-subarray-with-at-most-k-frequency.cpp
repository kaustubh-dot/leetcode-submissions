class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        int ans=INT_MIN;
        unordered_map<int,int> m;
        int n=nums.size();
        while(high<n){
            m[nums[high]]++;
            while(m[nums[high]]>k){
                m[nums[low]]--;
                if(m[nums[low]]==0){
                    m.erase(nums[low]);
                }
                low++;
            }
            ans=max(ans,high+1-low);
            high++;
        }
        return ans;
    }
};