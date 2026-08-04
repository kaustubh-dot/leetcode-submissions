class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totsum=0;
        int leftsum=0;
        for(int i:nums){
            totsum+=i;
        }
        vector<int> arr(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            totsum-=nums[i];
            arr[i]=abs(leftsum-totsum);
            leftsum+=nums[i];
        }
        return arr;
    }
};