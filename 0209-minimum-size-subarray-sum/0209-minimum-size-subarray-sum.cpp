class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int presum = 0;
        int ans = INT_MAX;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            presum += nums[right];

            while(presum >= target){
                ans = min(ans, right-left+1);
                presum -= nums[left];
                left++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};