class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        int low=0,high=s.length()-1;
        while(low<high){
            while(low<high && st.find(s[low])==st.end()){
                low++;
            }
            while(low<high && st.find(s[high])==st.end()){
                high--;
            }
            swap(s[low],s[high]);
            low++;
            high--;
        }
        return s;
    }
};