class Solution {
public:
    int helper(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int ans=helper(num);
        while(10){
            if(ans<10){
                break;
            }
            ans=helper(ans);
        }
        return ans;
    }
};