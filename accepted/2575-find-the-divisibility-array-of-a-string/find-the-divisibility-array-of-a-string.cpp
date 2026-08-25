class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans;
        long long chek=0;
        for(char&  ch:word){
            chek=(chek*10+(ch-'0'))%m;
            if(chek==0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};