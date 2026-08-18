class Solution {
public:
    int longestPalindrome(string s) {
        int odd=0;
        int ans=0;
        unordered_map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        for(auto& i:m){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                ans+=(i.second-1);
                odd=1;
            }
        }
        return ans+odd;
    }
};