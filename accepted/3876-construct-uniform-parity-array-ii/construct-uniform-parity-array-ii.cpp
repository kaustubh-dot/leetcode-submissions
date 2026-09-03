class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=INT_MAX;
        int oddsi;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0 ){
                if(odd>nums1[i]){
                    odd=nums1[i];
                    oddsi=i;
                }
            }
        }
        if(odd==INT_MAX){
            return true;
        }
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                if(nums1[i]-odd>=1 && i!=oddsi){
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};