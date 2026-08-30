class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0;
        int minv=nums[0];
        int maxi=0;
        int maxv=nums[0];
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            if(minv>nums[i]){
                mini=i;
                minv=nums[i];
            }
            if(maxv<nums[i]){
                maxv=nums[i];
                maxi=i;
            }
        }
        int left=min(mini,maxi);
        int right=max(mini,maxi);
        return min({
            right+1,
            n-left,
            left+1+n-right,
        });
    }
};