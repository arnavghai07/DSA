class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int presum = 0;
        int n = nums.size();
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){    
                presum += -1;
            }
            else{
                presum += 1;
            }
            if(presum == 0){
                maxi = i + 1;
            }
            if(mpp.find(presum) != mpp.end()){
                maxi = max(maxi, i - mpp[presum]);
            }
            else{
                mpp[presum] = i;
            }
        }
        return maxi;
    }
};