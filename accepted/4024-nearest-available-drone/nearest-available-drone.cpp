class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=INT_MAX;
        int x1=target[0];
        int y1=target[1];
        int index=INT_MAX;
        for(int i=0;i<drones.size();i++){
            int x2=drones[i][0];
            int y2=drones[i][1];
            int rang=drones[i][2];
            int dist=abs(x2-x1)+abs(y2-y1);
            if(dist<=rang){
                if(dist==ans){
                    index=min(i,index);
                }
                if(dist<ans){
                ans=dist;
                index=i;
                }
            }
        }
        return index==INT_MAX?-1:index;
    }
};