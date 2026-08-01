class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best=nums[0];
        int worst=nums[0];
        int ans=nums[0];
        int sum=nums[0];
        int minworst=INT_MAX;
        for(int i=1;i<nums.size();++i){
            sum+=nums[i];
            int prevbest=best;
            int prevworst=worst;
            best=max(prevbest+nums[i],nums[i]);
            worst=min(prevworst+nums[i],nums[i]);
            ans=max(ans,best);
            minworst=min(worst,minworst);
        }
        return sum==worst?ans:max(ans,sum-minworst);
    }
};