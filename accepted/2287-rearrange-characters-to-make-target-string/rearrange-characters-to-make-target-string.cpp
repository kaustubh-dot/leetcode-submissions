class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(auto& i:s){
            m1[i]++;
        }
        for(auto& i:target){
            m2[i]++;
        }
        int ans=INT_MAX;
        for(auto& i:m2){
            ans=min(ans,m1[i.first]/i.second);
        }
        return ans;
    }
};