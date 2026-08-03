class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum=0;
        int totalsum=0;
        for(int i:nums){
            totalsum+=i;
        }
        for(int i=0;i<nums.size();i++){
            totalsum-=nums[i];
            if(leftsum==totalsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};