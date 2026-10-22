class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int a = nums[0];

        bool increasing = true;
        bool decreasing = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (a + i) % n) {
                increasing = false;
            }

            if (nums[i] != (a - i + n) % n) {
                decreasing = false;
            }
        }

        if (!increasing && !decreasing) {
            return -1;
        }

        if (increasing) {
            int k = (n - a) % n;
            return min(k, n - k + 2);
        }

        int k = (n - 1 - a + n) % n;
        return min(k + 1, n - k + 1);
    }
};