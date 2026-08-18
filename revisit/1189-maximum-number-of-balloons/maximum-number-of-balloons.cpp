class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> arr(5,0);
        for(auto& i:text){
            if(i=='b')arr[0]++;
            if(i=='a')arr[1]++;
            if(i=='l')arr[2]++;
            if(i=='o')arr[3]++;
            if(i=='n')arr[4]++;
        }
        return min({arr[0],arr[1],arr[2]/2,arr[3]/2,arr[4]});
    }
};