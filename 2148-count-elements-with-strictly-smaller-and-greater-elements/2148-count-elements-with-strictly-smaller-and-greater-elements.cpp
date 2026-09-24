class Solution {
public:
    int countElements(vector<int>& nums) {
        int minn = INT_MAX, maxx = INT_MIN;
        for(int x : nums){
            minn = min(minn, x);
            maxx = max(maxx, x);
        }

        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > minn && nums[i] < maxx){
                count++;
            }
        }
        return count;

    }
};