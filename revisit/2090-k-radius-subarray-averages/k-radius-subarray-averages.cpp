class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),-1);
        if(k==0)return nums;
        int low=0;
        int high=2*k;
        if(nums.size()<2*k+1){
            return ans;
        }
        long long sum=0;
        for(int i=0;i<=high;i++){
            sum+=nums[i];
        }
        ans[high/2]=sum/(2*k+1);
        while(high<nums.size()){
            sum-=nums[low++];
            if(high+1>=nums.size()){
                break;
            }
            sum+=nums[++high];
            ans[low+k]=sum/(2*k+1);
        }
        return ans;
    }
};