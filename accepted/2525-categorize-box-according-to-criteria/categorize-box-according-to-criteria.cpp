class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false;
        bool heavy=false;
        if(length>=1e4 ||width>=1e4 ||height>=1e4  || 1LL*length*width*height>=1e9){
            bulky=true;
        }
        if(mass>=100){
            heavy=true;
        }
        if(heavy && bulky){
            return "Both";
        }
        if(!heavy && !bulky){
            return "Neither";
        }
        if(!heavy && bulky){
            return "Bulky";
        }
        if(heavy && !bulky){
            return "Heavy";
        }
        return "HI";
    }
};