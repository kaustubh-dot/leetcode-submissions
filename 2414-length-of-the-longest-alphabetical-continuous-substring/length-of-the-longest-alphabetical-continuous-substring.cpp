class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count=1;
        int ans=INT_MIN;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]==char(s[i]+1)){
                count++;
            }
            else{
                count=1;
            }
            ans=max(count,ans);
        }
        return ans==INT_MIN?1:ans;
    }
};