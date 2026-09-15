class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int,int> m;
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            m[A[i]]++;
            if(m[A[i]]==2){
                m[A[i]]=0;
                count++;
            }
            m[B[i]]++;
            if(m[B[i]]==2){
                m[B[i]]=0;
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};