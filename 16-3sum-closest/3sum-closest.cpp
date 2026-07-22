class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                int current=nums[i]+nums[start]+nums[end];
                if(abs(target-sum)>abs(target-current)){
                    sum=current;
                }
                if(nums[i]+nums[start]+nums[end]<target){
                    start++;
                }
                else if(nums[i]+nums[start]+nums[end]>target){
                    end--;
                }
                else{
                    return target;
                }
            }
        }
        return sum;
    }
};