class Solution {
public:
    int maxPower(string s) {
        int count=1;
        int ans=INT_MIN;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                count=1;
            }
            ans=max(ans,count);
        }
        return ans==INT_MIN?1:ans;
    }
};