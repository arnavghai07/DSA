class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for(int  num : nums){
            mp[num]++;
        }
        for(int i = nums[0]; i <= nums[n-1]; i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};