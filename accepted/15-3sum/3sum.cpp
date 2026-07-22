class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> ans(3,0);
        vector<vector<int>> mainans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int start=i+1;
            int end=nums.size()-1;  
            while(start<end){
            if(nums[i]+nums[start]+nums[end]==0){
                ans[0]=nums[i];
                ans[1]=nums[start];
                ans[2]=nums[end];
                mainans.push_back(ans);
                start++;
                end--;
                while(start<end && nums[start]==nums[start-1]){
                    start++;
                }
                while(start<end && nums[end]==nums[end+1]){
                    end--;
                }
            }
            else if(nums[i]+nums[start]+nums[end]>0){
                end--;
            }
            else{
                start++;
            }
        }
        }
    return mainans;
    }
};