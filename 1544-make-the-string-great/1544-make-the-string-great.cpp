class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for (char c : s) {
            if (!st.empty() &&
                tolower(c) == tolower(st.top()) &&
                c != st.top()) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }

        string ans;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};