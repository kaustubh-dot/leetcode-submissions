class Solution {
public:
    bool isPalindrome(string s) {
        string init;
        string revers;
        for(auto& ch:s){
            if((ch>='a'&&ch<='z') || (ch>='0' && ch<='9')){
                init.push_back(ch);
            }
            if(ch>='A'&&ch<='Z'){
                init.push_back(char(ch-'A'+'a'));
            }
        }
        revers=init;
        reverse(revers.begin(),revers.end());
        return revers==init;
    }
};