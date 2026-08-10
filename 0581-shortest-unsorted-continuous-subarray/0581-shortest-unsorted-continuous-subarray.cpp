class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int right = -1, left = -1;
        int maxnum = INT_MIN;
        int minnum = INT_MAX;
        int n = nums.size();

        for(int i = 0; i < nums.size(); i++){
            maxnum = max(nums[i], maxnum);

            if(nums[i] < maxnum){
                right = i;
            }
        }

        for(int i = n-1; i >=0; i--){
            minnum = min(nums[i], minnum);

            if(nums[i] > minnum){
                left = i;
            }
        }

        if(right == -1){
            return 0;
        }
        return right - left +1;
    }
};