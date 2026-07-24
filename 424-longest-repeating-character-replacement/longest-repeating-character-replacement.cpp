class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> arr(256, 0);
        int low = 0;
        int high = 0;
        int ans = INT_MIN;
        while (high < s.length()) {
            arr[s[high]]++;
            int len = high + 1 - low;
            int maxel = *max_element(arr.begin(), arr.end());
            int diff = len - maxel;
            while (diff > k) {
                arr[s[low]]--;
                low++;
                maxel = *max_element(arr.begin(), arr.end());
                len=high-low+1;
                diff = len - maxel;
            }
            ans = max(ans, high - low + 1);
            high++;
        }
        return ans;
    }
};