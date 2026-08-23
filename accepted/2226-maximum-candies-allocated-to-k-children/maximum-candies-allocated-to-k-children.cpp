class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {
        int low=1;
        int high=*max_element(c.begin(),c.end());
        long long ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long count=0;
            for(auto& i:c){
                if(i/mid!=0){
                    count+=i/mid;
                }
                else{
                    continue;
                }
            }
            if(count<k){
                high=mid-1;
            }
            else{
                ans=max(ans,1LL*mid);
                low=mid+1;
            }
        }
        return ans;
    }
};