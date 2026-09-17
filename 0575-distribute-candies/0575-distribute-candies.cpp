class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());

        if(candyType.size() / 2 <= s.size()) {
            return candyType.size() / 2;
        }
        else {
            return s.size();
        }
    }
};