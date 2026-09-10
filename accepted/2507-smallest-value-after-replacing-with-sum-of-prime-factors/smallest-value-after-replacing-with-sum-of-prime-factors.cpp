class Solution {
public:
    int factors(int n) {
        int sum = 0;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                sum += i;
                n /= i;
            }
        }
        if (sum == 0) {
            return n;
        }
        if (n > 1) {
            sum += n;
        }
        return sum;
    }
    int smallestValue(int n) {
        int temp = n;
        int k = 0;
        while (true) {
            temp = factors(temp);
            if (temp == k) {
                break;
            }
            k = temp;
        }
        return k;
    }
};