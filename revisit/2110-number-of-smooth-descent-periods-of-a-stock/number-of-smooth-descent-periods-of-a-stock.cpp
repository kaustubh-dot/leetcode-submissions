class Solution {
public:
    long long getDescentPeriods(vector<int>& nums) {
        long long ans=1;
        long long len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]-nums[i]==1){
                len++;
            }
            else{
                len=1;
            }
            ans+=len;
        }
        return ans;
    }
};