class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        unordered_map<char, int> m;
        int low = 0;
        int high = k-1;
        int ans = INT_MAX;
        int count = 0;
        int n = blocks.length();
        for (int i = 0; i <= high; i++) {
            m[blocks[i]]++;
        }
        count = high - low + 1 - m['B'];
        ans = min(ans, count);
        while (high < n) {
            low++;
            m[blocks[low - 1]]--;
            if (high + 1 >= n)
                break;
            high++;
            m[blocks[high]]++;
            count = high - low + 1 - m['B'];
            ans = min(ans, count);
        }
        return ans;
    }
};