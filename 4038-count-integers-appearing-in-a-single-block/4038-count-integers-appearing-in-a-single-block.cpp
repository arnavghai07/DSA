class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector<int> c;
        for(int j = 0; j < nums.size(); ++j){
            if(j ==0 || nums[j] != nums[j-1]){
                c.push_back(nums[j]);
            }
        }

        unordered_map<int, int> bc;
        for(int x : c){
            bc[x]++;
        }

        int sc = 0;
        for(const auto& [x, count] : bc){
            if(count == 1){
                sc++;
            }
        }
        return sc;
    }
};