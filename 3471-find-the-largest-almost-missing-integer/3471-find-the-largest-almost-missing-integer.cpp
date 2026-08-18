class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int num = -1;

        if (k == 1) {
            for (int i = 0; i < n; i++) {
                if (mp[nums[i]] == 1) {
                    num = max(num, nums[i]);
                }
            }
        }
        else if (k == n) {
            for (int i = 0; i < n; i++) {
                num = max(num, nums[i]);
            }
        }
        else {
            if (mp[nums[0]] == 1) {
                num = max(num, nums[0]);
            }

            if (mp[nums[n - 1]] == 1) {
                num = max(num, nums[n - 1]);
            }
        }

        return num;
    }
};