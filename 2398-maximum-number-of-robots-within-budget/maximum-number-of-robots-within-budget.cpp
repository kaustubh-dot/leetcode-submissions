class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts,
                      long long budget) {
        multiset<int> m;
        long long sum = 0;
        int low = 0, high = 0;
        int maxel = INT_MIN;
        int n = chargeTimes.size();
        long long bud = 0;
        int ans = 0;
        while (high < n) {
            m.insert(chargeTimes[high]);
            maxel = *m.rbegin();
            sum += runningCosts[high];
            int len = high + 1 - low;
            bud = maxel + len * sum;
            while (bud > budget) {
                m.erase(m.find(chargeTimes[low]));
                sum -= runningCosts[low];
                low++;
                len = high + 1 - low;
                if(m.empty()){
                    break;
                }
                maxel = *m.rbegin();
                bud = maxel + len * sum;
            }
            ans = max(ans, len);
            high++;
        }
        return ans;
    }
};