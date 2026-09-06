class Solution {
public:
    int helper(int n) {
        int ans = INT_MAX;
        int min = 0;
        int diff = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n %i == 0) {
                diff = abs(i - n / i);
                if (diff < ans) {
                    ans = diff;
                    min = i;
                }
            }
        }
        return min;
    }
    vector<int> closestDivisors(int num) {

        int diff1=abs(helper(num+1)-(num+1)/helper(num+1));
        int diff2=abs(helper(num+2)-(num+2)/helper(num+2));
        if(diff1>diff2){
            return{helper(num+2),(num+2)/helper(num+2)};
        }
        else{
            return{helper(num+1),(num+1)/helper(num+1)};

        }
        


    }
};