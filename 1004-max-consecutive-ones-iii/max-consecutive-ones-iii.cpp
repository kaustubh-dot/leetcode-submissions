class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> arr(2,0);
        int low=0;
        int high=0;
        int ans=0;
        for(int i=high;i<nums.size();i++){
            arr[nums[i]]++;
            while((i-low+1)-arr[1]>k){
                arr[nums[low]]--;
                low++;
            }
            ans=max(ans,i+1-low);
        }
        return ans;
    }
};