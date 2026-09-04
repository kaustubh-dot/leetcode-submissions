class Solution {
public:
    bool check(int x){
        int sum=0;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        return sum%2==0?true:false;
    }
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(check(i)){
                count++;
            }
        }
        return count;
    }
};