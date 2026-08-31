class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string sum="";
        int summation=0;
        for(char ch:s){
        if(ch!='0'){
            sum+=ch;
            summation+=ch-'0';
        }
        }
        if(sum.empty()){
            return 0;
        }
        long long ans=stoll(sum)*summation;
        return ans;
    }
};