class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int low=0;
        int high=0;
        int n=fruits.size();
        int ans=0;
        while(high<n){
            m[fruits[high]]++;
            while(m.size()>2){
                m[fruits[low]]--;
                if(m[fruits[low]]==0){
                    m.erase(fruits[low]);
                }
                low++;
            }
            if(m.size()<=2){
                int len=high-low+1;
                ans=max(ans,len);
            }
            high++;
        }
        return ans;
    }
};