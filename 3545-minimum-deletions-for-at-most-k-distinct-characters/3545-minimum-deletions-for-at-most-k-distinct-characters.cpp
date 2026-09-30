class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        vector<int> freq;

        for (auto it : mp) {
            freq.push_back(it.second);
        }

        sort(freq.begin(), freq.end());

        int distinct = freq.size();
        int deletions = 0;

        for (int i = 0; i < distinct - k; i++) {
            deletions += freq[i];
        }

        return deletions;
    }
};