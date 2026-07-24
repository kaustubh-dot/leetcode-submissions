class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int low=0;
        int high=0;
        int ans=0;
        int n=s.length();
        while(high<n){
            m[s[high]]++;
            while(m.size()<high+1-low){
                m[s[low]]--;
                if(m[s[low]]==0){
                    m.erase(s[low]);
                }
                low++;
            }
            if(m.size()==high+1-low){
                ans=max(ans,high+1-low);
            }
            high++;
        }
        return ans;
    }
};