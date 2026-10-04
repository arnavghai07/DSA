class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();

        vector<int> ans(n, n);

        int prev = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == c)
                prev = i;

            if(prev != -1)
                ans[i] = i - prev;
        }

        int next = -1;

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == c)
                next = i;

            if(next != -1)
                ans[i] = min(ans[i], next - i);
        }

        return ans;
    }
};