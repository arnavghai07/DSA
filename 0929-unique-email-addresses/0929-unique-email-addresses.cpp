class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique;

        for (string s : emails) {
            string email;
            bool plus = false;
            bool local = true;

            for (char c : s) {

                if (c == '@') {
                    local = false;
                    plus = false;
                    email += c;
                }
                else if (local && c == '+') {
                    plus = true;
                }
                else if (local && plus) {
                    continue;
                }
                else if (local && c == '.') {
                    continue;
                }
                else {
                    email += c;
                }
            }

            unique.insert(email);
        }

        return unique.size();
    }
};