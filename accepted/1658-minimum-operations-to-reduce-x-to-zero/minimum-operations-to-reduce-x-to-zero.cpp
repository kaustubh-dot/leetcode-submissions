class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=accumulate(nums.begin(),nums.end(),0);
        int need=total-x;
        if(need<0){
            return -1;

        }
        if(need==0){
            return nums.size();
        }
        int low=0;
        int n=nums.size();
        int high=0;
        int ans=INT_MIN;
        int sum=0;
        while(high<n){
            sum+=nums[high];
            while(sum>need){
                sum-=nums[low++];
            }
            if(sum==need){
                ans=max(ans,high+1-low);
            }
            high++;
        }
        return ans==INT_MIN?-1:nums.size()-ans;
    }
};