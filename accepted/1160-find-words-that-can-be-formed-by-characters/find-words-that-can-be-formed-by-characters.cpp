class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> m2;
        unordered_map<char,int> m1;
        for(auto i:chars){
            m1[i]++;
        }
        int ans=0;
        bool t=true;
        for(int i=0;i<words.size();i++){
                m2=m1;
                t=true;
            for(int j=0;j<words[i].length();j++){
                if(m2.find(words[i][j])==m2.end()){
                    t=false;
                    break;
                }
                else{
                    m2[words[i][j]]--;
                    if(m2[words[i][j]]==0){
                        m2.erase(words[i][j]);
                    }
                }
            }
            if(t){
                ans+=words[i].length();
            }
        }
        return ans;
    }
};