class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0;

        for(int i = nums.size()-1; i >= 0; i--){
            sum += nums[i];
        }

        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> ans;
        int selected = 0;

        for(int x : nums){
            selected += x;
            ans.push_back(x);

            if(selected > sum - selected){
                break;
            }
        }
        return ans;
    }
};