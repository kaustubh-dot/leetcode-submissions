class Solution {
public:
    int countGoodSubstrings(string s) {
        int low=0;
        int high=2;
        int n=s.size();
        int count=0;
        unordered_map<char,int> m;
        for(int i=0;i<=high;i++){
            m[s[i]]++;
        }
        if(m.size()==(high+1-low)){
            count++;
        }
        while(high<n){
            m[s[low]]--;
            if(m[s[low]]==0){
                m.erase(s[low]);
            }
            low++;
            if(high+1>=n){
                break;
            }
            high++;
            m[s[high]]++;
            if(m.size()==(high+1-low)){
                count++;
            }
            

        }
        return count;
    }
};