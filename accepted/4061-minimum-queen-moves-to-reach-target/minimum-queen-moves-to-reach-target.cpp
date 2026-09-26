class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int row1=source[0];
        int col1=source[1];
        int row2=target[0];
        int col2=target[1];
        if(source==target){
            return 0;
        }
        if(row1==row2 || col1==col2 || (abs(row1-row2)==abs(col1-col2))){
            return 1;
        }
        return 2;
    }
};