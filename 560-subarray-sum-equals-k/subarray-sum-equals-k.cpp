class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> m;
        int ans=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int check = sum-k;
            int freq=m[check];
            ans+=freq;
            m[sum]++;
        }
        return ans;
    }
};