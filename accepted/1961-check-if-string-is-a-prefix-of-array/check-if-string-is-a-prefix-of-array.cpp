class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string temp="";
        int i=0;
        for(i;i<words.size();i++){
            temp+=words[i];
            if(temp.size()>s.size()){
                return false;
            }
            if(temp.size()==s.size()){
                return temp==s;
            }
        }
        return false;
    }
};