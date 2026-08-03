class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=0;
        int high=0;
        int count=0;
        long long ans=0;
        int n=nums.size();
        while(high<n){
            if(nums[high]==maxi){
                count++;
            }
            while(count>=k){
                ans+=n-high;
                if(nums[low]==maxi){
                    count--;
                }
                low++;
            }
            high++;
        }
        return ans;
    }
};