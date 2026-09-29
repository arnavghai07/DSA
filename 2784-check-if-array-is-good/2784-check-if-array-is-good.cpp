class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        if (mp[n - 1] != 2)
            return false;

        for (int i = 1; i <= n - 2; i++) {
            if (mp[i] != 1)
                return false;
        }

        return true;
    }
};