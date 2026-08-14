class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(auto& i:r){
            m1[i]++;
        }
        for(auto& i:m){
            m2[i]++;
        }
        for(auto& i:m1){
            if(i.second<=m2[i.first]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};