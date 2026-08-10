class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int low=0;
        int high=k-1;
        long long sum=0;
        int count=0;
        for(int i=0;i<=high;i++){
            sum+=arr[i];
        }
        if(sum/k>=t){
            count++;
        }
        while(high<arr.size()){
            sum-=arr[low++];
            if(high+1>=arr.size()){
                break;
            }
            sum+=arr[++high];
            if(sum/k>=t){
                count++;
            }
        }
        return count;
    }
};