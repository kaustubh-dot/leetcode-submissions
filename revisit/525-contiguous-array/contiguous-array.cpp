class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=0;
        int z=0;
        int o=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            else{
                o++;
            }
            int diff=z-o;
            if(diff==0){
                ans=max(ans,i+1);
            }
            int check=m[diff];
            if(check!=0){
                ans=max(ans,i+1-check);
            }
            else{
                m[diff]=i+1;
            }
        }
        return ans;
    }
};