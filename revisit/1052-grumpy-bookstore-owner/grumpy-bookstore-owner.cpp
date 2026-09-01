class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int low=0;
        int high=minutes-1;
        int n=customers.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                ans+=customers[i];
            }
        }
        int sum=0;
        int maxsum=0;
        for(int i=0;i<=high;i++){
            if(grumpy[i]==1){
                sum+=customers[i];
            }
        }
        maxsum=sum;
        while(high<n-1){
            if(grumpy[low]==1){
                sum-=customers[low];
            }
            low++;
            high++;
            if(grumpy[high]==1){
                sum+=customers[high];
            }
            maxsum=max(sum,maxsum);
        }
        return ans+maxsum;
    }
};