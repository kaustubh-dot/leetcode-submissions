class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> v = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        int ans = 0;
        int low = 0;
        int high = k - 1;
        for (int i = 0; i <= high; i++) {
            if (v.find(s[i]) != v.end()) {
                count++;
            }
        }
        ans = max(ans, count);
        while (high < s.length()) {
            low++;
            if (v.find(s[low - 1]) != v.end()) {
                count--;
            }
            if (high + 1 > s.length()) {
                break;
            }
            high++;
            if (v.find(s[high]) != v.end()) {
                count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};