class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> ans;
        int n = s.length();
        unordered_map<char, int> m;
        int low = 0;
        int high = 0;
        while (high < n) {
            m[s[high]]++;
            while (m['1'] >= k) {
                if (m['1'] == k) {
                    ans.push_back(s.substr(low, high + 1 - low));
                }
                m[s[low]]--;
                if (m[s[low]] == 0) {
                    m.erase(s[low]);
                }
                low++;
            }
            high++;
        }
        if (ans.empty())
            return "";
        sort(ans.begin(), ans.end(), [](string a, string b) {
            if (a.size() != b.size()) {
                return a.size() < b.size();
            }
            return a < b;
        });
        return ans[0];
    }
};