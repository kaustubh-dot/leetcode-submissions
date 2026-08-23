class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int count=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid!=0){
                    ans++;
                }
                ans+=piles[i]/mid;
            }
            if(ans<=h){
                count=min(count,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return count;
    }
};