class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        int left = 0;
        int right = k - 1;

        while(right < nums.size()) {

            int diff = nums[right] - nums[left];

            ans = min(ans, diff);

            left++;
            right++;
        }

        return ans;
    }
};