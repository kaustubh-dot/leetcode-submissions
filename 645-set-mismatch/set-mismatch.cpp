class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int n:nums){
            m[n]++;
        }
        int dup=0;
        int mis=0;
        for(int i=0;i<=n;i++){
            if(m[i]==2){
                dup=i;
            }
            if(m[i]==0){
                mis=i;
            }
        }
        return {dup,mis};
    }
};