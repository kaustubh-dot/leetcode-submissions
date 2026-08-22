class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=nums.size()-1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[n-1]){
                low=mid+1;
            }
            else{
                ans=nums[mid];
                high=mid-1;
            }
        }
        return ans;
    }
};