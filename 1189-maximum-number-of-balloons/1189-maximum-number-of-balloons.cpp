
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char, int> mp;

        for (char c : text) {
            mp[c]++;
        }

        int count = INT_MAX;

        for (char c : s) {
            if (mp[c] < 1) {
                return 0;
            }
        }

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        for (auto& p : freq) {
            count = min(count, mp[p.first] / p.second);
        }

        return count;
    }
};
