class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> m;
        int ma=INT_MIN;
        int mi=INT_MAX;
        for(int n:nums){
            m.insert(n);
            ma=max(n,ma);
            mi=min(n,mi);
        }
        vector<int> ans;
        for(int i=mi;i<=ma;i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};