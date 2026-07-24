class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int low = 0;
        int high = 0;
        int ans = 0;
        int freq = 0;
        int maxfreq = INT_MIN;
        unordered_map<char,int> arr(2);
        int n = answerKey.length();
        while (high < n) {
            arr[answerKey[high]]++;
            freq = arr[answerKey[high]];
            maxfreq = max(freq, maxfreq);
            while ((high - low + 1) - maxfreq > k) {
                arr[answerKey[low]]--;
                low++;
            }
            ans=max(ans,high-low+1);
            high++;
        }
        return ans;
    }
};