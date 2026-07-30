class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel = arr[0];
        int onedel = INT_MIN;
        int ans = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (onedel == INT_MIN) {
                onedel = nodel;
            } else {
                onedel = max(nodel, onedel + arr[i]);
            }
            nodel = max(nodel + arr[i], arr[i]);
            ans = max({ans, nodel, onedel});
        }
        return ans;
    }
};