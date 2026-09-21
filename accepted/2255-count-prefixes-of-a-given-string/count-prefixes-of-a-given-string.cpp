class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++){
            if(words[i].size()>s.size()){
                continue;
            }
            for(int j=0;j<s.size();j++){
                if(words[i][j]!=s[j]){
                    break;
                }
                if(j==(words[i].size()-1)){
                    count++;
                }
            }
        }
        return count;
    }
};