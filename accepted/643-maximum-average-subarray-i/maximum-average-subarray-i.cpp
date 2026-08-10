class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        int high=k-1;
        double sum=0;
        int n=nums.size();
        double ans=INT_MIN;
        for(int i=0;i<=high;i++){
            sum+=nums[i];
        }
        ans=max(ans,sum/k*1.0);
        while(high<n){
            sum-=nums[low++];
            if(high+1>=n){
                break;
            }
            sum+=nums[++high];
            ans=max(ans,sum/k*1.0);
        }
        return ans;
    }
};