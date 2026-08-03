class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int low=0,high=0;
        int count=0;
        long long product=1;
        int n=nums.size();
        while(high<n){
            product*=nums[high];
            while(product>=k){
                product/=nums[low];
                low++;
            }
            count+=high+1-low;
            high++;
        }
        return count;
    }
};