class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> mans;
        vector<int> ans(4,0);
        if(nums.size()<4){
            return {};
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int start=j+1;
                int end=nums.size()-1;
                while(start<end){
                    long long sum=1LL*nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum>target){
                        end--;
                    }
                    else if(sum<target){
                        start++;
                    }
                    else{
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[start];
                        ans[3]=nums[end];
                        mans.push_back(ans);
                        start++;
                        end--;
                        while(start<end && nums[start]==nums[start-1]){
                            start++;
                        }
                        while(start<end && nums[end]==nums[end+1]){
                            end--;
                        }
                    }
                }
            }
        }
        return mans;
    }
};