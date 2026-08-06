class Solution {
    int ans(int n, int t) {
        int product = 1;
        int temp=n;
        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }
        if (product % t == 0) {
            return n;
        } else {
            return ans(n + 1, t);
        }
    }

public:
    int smallestNumber(int n, int t) {
        return ans(n,t);
    }
};