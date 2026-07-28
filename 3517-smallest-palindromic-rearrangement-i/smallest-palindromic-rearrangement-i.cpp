class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> m;
        string l;
        string mi="";
        string e;
        for(char ch:s){
            m[ch]++;
        }
        for(auto it:m){
            char ch=it.first;
            int freq=it.second;
            if(freq%2==1){
                mi=ch;
            }
            l+=string(freq/2,ch);
        }
        e=l;
        reverse(e.begin(),e.end());
        if(mi!=""){
            return l+mi+e;
        }
        return l+e;
    }
};