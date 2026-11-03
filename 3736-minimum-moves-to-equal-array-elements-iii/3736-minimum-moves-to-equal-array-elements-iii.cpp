class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxn = INT_MIN;

        for (int num : nums) {
            maxn = max(maxn, num);
        }

        int count = 0;

        for (int num : nums) {
            count += maxn - num;
        }

        return count;
    }
};