
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> mp;

        for (char c : words[0]) {
            mp[c]++;
        }

        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> count;

            for (char c : words[i]) {
                count[c]++;
            }

            for (auto &it : mp) {
                it.second = min(it.second, count[it.first]);
            }
        }

        vector<string> ans;

        for (auto &it : mp) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(string(1, it.first));
            }
        }

        return ans;
    }
};
