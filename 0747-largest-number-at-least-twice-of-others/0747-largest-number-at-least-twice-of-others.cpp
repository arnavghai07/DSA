class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxx = INT_MIN;
        int val = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxx){
                maxx = nums[i];
                val = i;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != maxx && maxx < 2 * nums[i]){
                return -1;
            }
        }

        return val;
    }
};