class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end());
        int n = h.size();
        long long ans = h[n - 1];
        k--;
        int neg = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (k == 0) {
                return ans;
            }
            if (h[i]+neg <= 0) {
                k--;
                if (k == 0) {
                    return ans;
                }
                continue;
            }
            ans += h[i] + neg;
            neg--;
            k--;
            if (k == 0) {
                return ans;
            }
        }
        return ans;
    }
};