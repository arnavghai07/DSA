
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        vector<int> v;

        for (auto& it : freq) {
            v.push_back(it.second);
        }

        unordered_set<int> st;

        for (int x : v) {
            if (st.count(x)) {
                return false;
            }
            st.insert(x);
        }

        return true;
    }
};
