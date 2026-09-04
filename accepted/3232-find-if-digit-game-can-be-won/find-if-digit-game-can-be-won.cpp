class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing=0;
        int doub=0;
        for(int &i:nums){
            if(i<10){
                sing+=i;
            }
            else{
                doub+=i;
            }
        }
        return sing!=doub;
    }
};