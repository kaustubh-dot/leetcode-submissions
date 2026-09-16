class Solution {
public:
    string processStr(string s) {
        string st;
        for (auto& i : s) {
            if (i >= 'a' && i <= 'z') {
                st.push_back(i);
            }
            if (i == '*') {
                if (st.size() == 0) {
                    continue;
                }
                st.pop_back();
            }
            if (i == '#') {
                st += st;
            }
            if (i == '%') {
                reverse(st.begin(), st.end());
            }
        }
        return st;
    }
};