class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> m;
        for(int i:nums){
            m.insert(i);
        }
        for(int i=1;i<=101;i++){
            if(m.find(i*k)==m.end()){
                return i*k;
            }
        }
        return 0;
    }
};