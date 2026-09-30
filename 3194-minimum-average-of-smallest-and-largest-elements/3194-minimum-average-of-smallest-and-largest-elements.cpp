class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double avg = INT_MAX;

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            avg = min(avg, (nums[left] + nums[right]) / 2.0);
            left++;
            right--;
        }

        return avg;
    }
};