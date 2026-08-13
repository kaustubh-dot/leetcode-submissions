class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<s.length();i++){
            if(m[s[i]].first!=0){
                m[s[i]].first++;
            }
            else{
            m[s[i]].first++;
            m[s[i]].second=i;
            }
        }
        int ans=INT_MAX;
        for(auto s:m){
            if(s.second.first==1){
                ans=min(s.second.second,ans);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};