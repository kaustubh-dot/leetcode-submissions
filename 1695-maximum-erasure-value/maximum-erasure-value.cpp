class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        int low=0;
        int high=0;
        int sum=0;
        int ans=0;
        int n=nums.size();
        while(high<n){
            m[nums[high]]++;
            sum+=nums[high];
            while(m.size()<high+1-low){
                m[nums[low]]--;
                sum-=nums[low];
                if(m[nums[low]]==0){
                    m.erase(nums[low]);
                }
                low++;
            }
            if(m.size()==high+1-low){
                ans=max(ans,sum);
            }
            high++;
        }
        return ans;
    }
};