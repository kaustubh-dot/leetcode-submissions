class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f,
                                             vector<vector<int>>& s) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        while (i < f.size() && j < s.size()) {
            int start1 = f[i][0];
            int end1 = f[i][1];
            int start2 = s[j][0];
            int end2 = s[j][1];
            if (start1 <= start2) {
                if (end1 >= start2) {
                    ans.push_back({max(start1, start2), min(end1, end2)});
                }
            } 
            else {
                if (end2 >= start1) {
                    ans.push_back({max(start1, start2), min(end1, end2)});}
            }
            if (end1 < end2) {
                    i++;
                } else {
                    j++;
                }
            }
        return ans;
        }
    };
