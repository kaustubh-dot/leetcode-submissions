class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int start=s[i];
            int end=e[i];
            if(q>=start && q<=end){
                count++;
            }
        }
        return count;
    }
};