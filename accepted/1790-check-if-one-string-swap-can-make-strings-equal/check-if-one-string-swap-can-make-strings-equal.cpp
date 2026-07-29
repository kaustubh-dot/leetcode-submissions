class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length()!=s2.length()){
            return false;
        }
        if(s1==s2){
            return true;
        }
        vector<int> indx;
        int count=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                count++;
                indx.push_back(i);
                if(count>2){
                    return false;
                }
            }
        }
        if(count!=2){
            return false;
        }
        swap(s1[indx[0]],s1[indx[1]]);
        return s1==s2;
    }
};