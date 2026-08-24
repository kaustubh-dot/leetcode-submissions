class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int> s;
        unordered_map<int,int> r;
        bool three=false;
        bool pair=false;
        for(auto & i:suits){
            s[i]++;
        }
        for(auto & i:ranks){
            r[i]++;
        }
        if(s[suits[0]]==5){
            return "Flush";
        }        
        for(auto&i:r){
            if(i.second>=3){
                three=true;
            }
            else if(i.second==2){
                pair=true;
            }
        }
        if(three)return "Three of a Kind";
        if(pair)return "Pair";
        return "High Card";
    }
};