class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for(int &x : nums) {
            if(x < 0 && k > 0) {
                x = -x;
                k--;
            }
        }

        int mn = *min_element(nums.begin(), nums.end());

        if(k % 2 == 1) {
            mn = -mn;
        }

        int sum = 0;
        for(int x : nums) {
            sum += x;
        }

        if(k % 2 == 1) {
            sum -= 2 * *min_element(nums.begin(), nums.end());
        }

        return sum;
    }
};