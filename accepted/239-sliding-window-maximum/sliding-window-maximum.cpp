class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int low=0;
        int high=k-1;
        vector<int> ans;
        multiset<int> m;
        for(int i=0;i<=high;i++){
            m.insert(nums[i]);
        }
        ans.push_back(*m.rbegin());
        int n=nums.size();
        while(high<n){
            m.erase(m.find(nums[low]));
            low++;
            if(high+1>=n){
                break;
            }
            high++;
            m.insert(nums[high]);
            ans.push_back(*m.rbegin());
        }
        return ans;
    }
};