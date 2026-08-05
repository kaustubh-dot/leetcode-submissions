class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& n) {
        int start1=n[0];
        vector<vector<int>> ans;
        int end1=n[1];
        for(int i=0;i<intervals.size();i++){
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end2<start1){
                ans.push_back({start2,end2});
                continue;
            }
            if(start2<=end1){
                start1=min(start1,start2);
                end1=max(end1,end2);
                continue;
            }
            ans.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        ans.push_back({start1,end1});
        return ans;
    }
};