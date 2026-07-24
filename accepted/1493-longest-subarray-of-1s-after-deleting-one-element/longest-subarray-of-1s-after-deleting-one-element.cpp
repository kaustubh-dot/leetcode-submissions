class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        vector<int> arr(2, 0);
        int high = 0;
        int ans = 0;
        int freq = 0;
        int maxfreq = 0;
        int n = nums.size();
        while (high < n) {
            arr[nums[high]]++;
            while(high-low+1-arr[1]>1){
                arr[nums[low]]--;
                low++;
            }
            ans=max(ans,high-low+1);
            high++;
        }
        return ans==0?0:ans-1;
    }
};