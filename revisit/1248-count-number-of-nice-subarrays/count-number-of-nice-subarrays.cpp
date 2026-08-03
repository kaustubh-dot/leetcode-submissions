class Solution {
public:
    int solve(vector<int>& nums, int k){
        int low=0,high=0;
        int count=0;
        unordered_map<int,int> m;
        int ans=0;
        while(high<nums.size()){
            m[nums[high]]++;
            if(nums[high]%2==1){
                count++;
            }
            while(count>k){
                m[nums[low]]--;
                if(m[nums[low]]==0){
                    m.erase(nums[low]);
                }
                if(nums[low]%2==1){
                    count--;
                }
                low++;
            }
            ans+=high+1-low;
            high++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};