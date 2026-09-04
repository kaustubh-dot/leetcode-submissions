class Solution {
public:
    int helper(int m){
        int sum=0;
        while(m>0){
            sum+=m%10;
            m/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int sum=0;
        for(auto& i:s){
            sum+=helper((i-'a'+1));
        }
        k--;
        while(k--){
            sum=helper(sum);
        }
        return sum;
    }
};