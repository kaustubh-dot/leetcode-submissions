class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int index=(s[i]-2*s[i]+'z'+1);
            sum+=index*(i+1);
        }
        return sum;
    }
};