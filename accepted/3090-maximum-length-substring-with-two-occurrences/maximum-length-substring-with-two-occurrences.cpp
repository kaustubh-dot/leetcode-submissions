class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> m;
        int low=0;
        int high=0;
        int ans=0;
        int n=s.length();
        while(high<n){
            m[s[high]]++;
            while(m[s[high]]>2){
                m[s[low]]--;
                if(m[s[low]]==0){
                    m.erase(s[low]);
                }
                low++;
            }
            ans=max(ans,high-low+1);
            high++;
        }
        return ans;
    }
};