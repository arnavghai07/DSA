class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;

        while (i < path.size()) {

            if (path[i] == '/') {
                i++;
                continue;
            }

            string dir = "";

            while (i < path.size() && path[i] != '/') {
                dir += path[i];
                i++;
            }

            if (dir == ".") {
                continue;
            }
            else if (dir == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(dir);
            }
        }

        string ans = "";

        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans.empty() ? "/" : ans;
    }
};