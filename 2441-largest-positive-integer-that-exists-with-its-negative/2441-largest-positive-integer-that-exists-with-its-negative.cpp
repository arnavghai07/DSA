class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] == 0) {
                return nums[right];
            }
            else if (nums[left] + nums[right] < 0) {
                left++;
            }
            else {
                right--;
            }
        }

        return -1;
    }
};