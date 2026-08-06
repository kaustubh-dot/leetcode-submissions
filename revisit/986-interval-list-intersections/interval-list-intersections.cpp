class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>> ans;
        int i=0,j=0;
        while(i<f.size() && j<s.size()){
            int start1=f[i][0];
            int end1=f[i][1];
            int start2=s[j][0];
            int end2=s[j][1];
            int start=max(start1,start2);
            int end=min(end1,end2);
            if(start<=end){
                ans.push_back({start,end});
            }
            if(end1>end2){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};