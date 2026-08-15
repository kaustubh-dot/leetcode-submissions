class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool isnonzer=false;
        int num=0;
        for(auto& x:nums){
            num=num^x;
            if(num!=0){
                isnonzer=true;
            }
        }
        if(num!=0){
            return nums.size();
        }
        if(isnonzer){
            return nums.size()-1;
        }
        return 0;
    }
};