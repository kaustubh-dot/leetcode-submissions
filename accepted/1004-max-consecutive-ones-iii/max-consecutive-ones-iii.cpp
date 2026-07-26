class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int high=0;
        int low=0;
        int ans=INT_MIN;
        vector<int> arr(2,0);
        int n=nums.size();
        while(high<n){
            arr[nums[high]]++;
            while(arr[0]>k){
                arr[nums[low]]--;
                low++;
            }
            int count=high-low+1;
            ans=max(ans,count);
            high++;
        }
        return ans;
    }
};