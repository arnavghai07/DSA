class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int x = 1; x <= n; x++) {
            int pos = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

            int count = n - pos;

            if(count == x) {
                return x;
            }
        }

        return -1;
    }
};