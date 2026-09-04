class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int i=1;
        int sum=0;
        for(auto& m:s){
            sum+=i*(m-'0');
            i*=-1;
        }
        return sum;
    }
};