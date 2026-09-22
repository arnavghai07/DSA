class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        sort(nums.begin(), nums.end(), [&mp](int a, int b) {
            int ca = mp[a];
            int cb = mp[b];

            if(ca == cb) {
                return a > b;
            }

            return ca < cb;
        });

        return nums;
    }
};