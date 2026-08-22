class Solution {
public:
    int digsum(int n){
        int sum=0;
        while(n>0){
        int digit=n%10;
        sum+=digit;
        n/=10;
        }
        return sum;
    }
    int prodsum(int n){
        int prod=1;
        while(n>0){
        int digit=n%10;
        prod*=digit;
        n/=10;
        }
        return prod;
    }
    bool checkDivisibility(int n) {
        return n%(digsum(n)+prodsum(n))==0;
    }
};