class Solution {
    bool anse(vector<int>& a, vector<int>& b) {
        for (int i = 0; i < 256; i++) {
            if (a[i] < b[i]) {
                return false;
            }
        }
        return true;
    }

public:
    string minWindow(string s, string t) {
        int low = 0;
        int high = 0;
        int start = 0;
        int ans = INT_MAX;
        vector<int> a(256, 0);
        vector<int> b(256, 0);
        int n = s.length();
        for (int i = 0; i < t.length(); i++) {
            b[t[i]]++;
        }
        while (high < n) {
            a[s[high]]++;
            while (anse(a, b)) {
                if (ans > high - low + 1) {
                    ans = high - low + 1;
                    start = low;
                }
                a[s[low]]--;
                low++;
            }
            high++;
        }
        return ans==INT_MAX?"":s.substr(start, ans);
    }
};