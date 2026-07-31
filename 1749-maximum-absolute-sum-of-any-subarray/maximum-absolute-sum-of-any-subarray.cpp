class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best=nums[0];
        int worst=nums[0];
        int ans=nums[0];
        if(nums.size()==1){
            return abs(ans);
        }
        for(int i=1;i<nums.size();i++){
            worst=min(worst+nums[i],nums[i]);
            best=max(best+nums[i],nums[i]);
            ans=max({abs(worst),abs(ans),abs(best)});
        }
        return ans;
    }
};