class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            ans=max(ans,count);
        }
        return ans==INT_MIN?1:ans;
    }
};