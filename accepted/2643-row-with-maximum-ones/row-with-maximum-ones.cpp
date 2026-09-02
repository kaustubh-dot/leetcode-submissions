class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ansc=INT_MIN;
        int ansr=INT_MIN;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>ansc){
                ansc=count;
                ansr=i;
            }
        }
        return {ansr,ansc};
    }
};