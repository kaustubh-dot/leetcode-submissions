class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        unordered_map<string, string> m;
        for (int i = 0; i < knowledge.size(); i++) {
            m[knowledge[i][0]] = knowledge[i][1];
        }
        for (int i = 0; i < s.size(); i++) {
            string temp = "";
            if (s[i] == '(') {
                i++;
                while (true) {
                    if (s[i] == ')') {
                        break;
                    }
                    temp += s[i];
                    i++;
                }
                if (m.find(temp) == m.end()) {
                    ans += '?';
                } else {

                    ans += m[temp];
                }
            } else {
                ans += s[i];
            }
        }
        return ans;
    }
};