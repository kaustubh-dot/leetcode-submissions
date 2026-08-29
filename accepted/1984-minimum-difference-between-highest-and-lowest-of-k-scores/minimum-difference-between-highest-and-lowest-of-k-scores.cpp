class Solution {
public:
    int minimumDifference(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int ans=0;
        int high=k-1;
        int low=0;
        int diff=arr[high]-arr[low];
        ans=diff;
        int n=arr.size();
        while(high+1<n){
            diff=arr[++high]-arr[++low];
            ans=min(ans,diff);
        }
    return ans;
    }
};