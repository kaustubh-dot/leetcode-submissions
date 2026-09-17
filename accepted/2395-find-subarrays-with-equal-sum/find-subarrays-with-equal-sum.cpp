class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> m;
        int low=0;
        int high=2;
        int sum=0;
        sum=nums[0]+nums[1];
        m.insert(sum);
        int n=nums.size();
        while(high<n){
            sum-=nums[low++];
            sum+=nums[high++];
            if(m.find(sum)!=m.end()){
                return true;
            }
            else{
                m.insert(sum);
            }
        }
        return false;
    }
};