class Solution {
public:
    int solve(vector<int>& nums, int k){
        int low=0,high=0;
        int count=0;
        int ans=0;
        while(high<nums.size()){
            if(nums[high]%2==1){
                count++;
            }
            while(count>k){
                if(nums[low]%2==1){
                    count--;
                }
                low++;
            }
            ans+=high+1-low;
            high++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};