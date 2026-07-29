class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int least=nums[0];
        int most=nums[0];
        for(int i=1;i<nums.size();i++){
            int pmost=most;
            int pleast=least;
            least=min({nums[i],nums[i]*pmost,nums[i]*pleast});
            most=max({nums[i],nums[i]*pmost,nums[i]*pleast});
            ans=max({ans,least,most});
        }
        return ans;
    }
};