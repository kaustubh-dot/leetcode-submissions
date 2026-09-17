class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int low=0;
        int high=0;
        int sum=0;
        int n=arr.size();
        vector<int> best(n,INT_MAX);
        int ans=INT_MAX;
        int mini=INT_MAX;
        while(high<n){
            sum+=arr[high];
            while(sum>target){
                sum-=arr[low++];
            }
            if(sum==target){
                int len=high+1-low;
                if(low>0 && best[low-1]!=INT_MAX){
                    ans=min(ans,len+best[low-1]);
                }
                mini=min(mini,len);
            }
            best[high]=mini;
            high++;
        }

        return ans==INT_MAX?-1:ans;
    }
};