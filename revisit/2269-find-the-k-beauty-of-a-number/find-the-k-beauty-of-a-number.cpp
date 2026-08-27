    class Solution {
    public:
        int divisorSubstrings(int num, int k) {
            string s = to_string(num);
            int count = 0;
            for (int i = 0; i+k <= s.size(); i++) {
                string temp = s.substr(i, k);
                int numb = stoi(temp);
                if (numb > 0 && num % numb == 0) {
                    count++;
                }
            }
        return count;
        }

    }
    ;