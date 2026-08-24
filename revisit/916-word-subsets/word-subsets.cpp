class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<unordered_map<char, int>> m;
        unordered_map<char, int> m2;
        for (auto& i : words2) {
            unordered_map<char,int> count;
            for (auto& k : i) {

                count[k]++;
            }
            for(auto&k:count){
                m2[k.first]=max(m2[k.first],k.second);
            }
        }
        for (int i = 0; i < words1.size(); i++) {
            unordered_map<char, int> mp;
            for (char ch : words1[i]) {
                mp[ch]++;
            }
            m.push_back(mp);
        }
        vector<string> ans;
        for (int i = 0; i < m.size(); i++) {
            bool calid=true;
            for (auto& k : m2) {
                if (k.second > m[i][k.first]) {
                    calid=false;
                    break;
                }
            }
            if(calid){

            ans.push_back(words1[i]);
            }
        }
        return ans;
    }
};