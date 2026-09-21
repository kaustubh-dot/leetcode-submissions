class Solution {
public:
    int isPrefixOfWord(string sentence, string query) {
        vector<string> s;
        string temp = "";
        for (auto& ch : sentence) {
            if (ch == ' ') {
                s.push_back(temp);
                temp = "";
                continue;
            }
            temp += ch;
        }
        s.push_back(temp);
        for (int i = 0; i < s.size(); i++) {
            if (s[i].size() < query.size()) {
                continue;
            }
            for (int j = 0; j <query.size(); j++) {
                if (s[i][j] != query[j]) {
                    break;
                }
                if (j == query.size() - 1) {
                    return i + 1;
                }
            }
        }
        return -1;
    }
};