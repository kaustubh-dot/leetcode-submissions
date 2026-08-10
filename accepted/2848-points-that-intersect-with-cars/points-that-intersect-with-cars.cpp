class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int start1=nums[0][0];
        int end1=nums[0][1];
        for(int i=1;i<nums.size();i++){
            int start2=nums[i][0];
            int end2=nums[i][1];
            if(end1>=start2){
                end1=max(end1,end2);
                continue;
            }
            ans+=1+end1-start1;
            end1=end2;
            start1=start2;
        }
        ans+=end1-start1+1;
        return ans;
    }
};