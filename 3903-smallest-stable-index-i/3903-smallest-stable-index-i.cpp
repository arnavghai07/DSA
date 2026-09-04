class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> suff(n);

        int minn = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            minn = min(minn, nums[i]);
            suff[i] = minn;
        }

        int maxx = INT_MIN;

        for (int i = 0; i < n; i++) {
            maxx = max(maxx, nums[i]);

            int score = maxx - suff[i];

            if (score <= k) {
                return i;
            }
        }

        return -1;
    }
};