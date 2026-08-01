class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int ans=INT_MAX;
        int n=nums.size();
        int sum=0;
        while(high<n){
            sum+=nums[high];
            while(sum>=target){
            ans=min(ans,high+1-low);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        return ans==INT_MAX?0:ans;
    }
};