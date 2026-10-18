
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> freq;

        for (char c : chars) {
            freq[c]++;
        }

        int sum = 0;

        for (string s : words) {
            unordered_map<char, int> mp;

            for (char c : s) {
                mp[c]++;
            }

            bool canForm = true;

            for (auto& p : mp) {
                if (p.second > freq[p.first]) {
                    canForm = false;
                    break;
                }
            }

            if (canForm) {
                sum += s.length();
            }
        }

        return sum;
    }
};
