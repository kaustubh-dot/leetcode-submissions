class Solution {
public:
    int helper(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mind=INT_MAX;
        for(int i=0;i<nums.size();i++){
            nums[i]=helper(nums[i]);
            mind=min(mind,nums[i]);
        }
        return mind;
    }
};