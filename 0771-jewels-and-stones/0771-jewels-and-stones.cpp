class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;

        for(char c : stones){mp[c]++;}

        int ans = 0;

        for(char c : jewels){
            ans += mp[c];
        }
        return ans;
    }
};