
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int freq[10][10] = {};
        int count = 0;

        for (auto& d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);

            count += freq[a][b];
            freq[a][b]++;
        }

        return count;
    }
};
