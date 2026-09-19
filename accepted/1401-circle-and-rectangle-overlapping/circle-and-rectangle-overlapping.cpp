class Solution {
public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) {
        int closestx;
        if(x<x1){
            closestx=x1;
        }
        else if(x>x2){
            closestx=x2;
        }
        else{
            closestx=x;
        }
        int closesty;
        if(y<y1){
            closesty=y1;
        }
        else if(y>y2){
            closesty=y2;
        }
        else{
            closesty=y;
        }
        long long dx=x-closestx;
        long long dy=y-closesty;
        if(dx*dx+dy*dy>1LL*r*r){
            return false;
        }
        return true;
    }
};