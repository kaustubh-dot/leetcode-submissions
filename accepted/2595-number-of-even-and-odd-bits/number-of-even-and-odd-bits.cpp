class Solution {
public:
    string tobin(int n){
        string m="";
        while(n>0){
            m+=n%2;
            n/=2;
        }
        return m;
    }
    vector<int> evenOddBit(int n) {
        string a=tobin(n);
        int odd=0;
        int even=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                if(i%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        return {even,odd};
    }
};