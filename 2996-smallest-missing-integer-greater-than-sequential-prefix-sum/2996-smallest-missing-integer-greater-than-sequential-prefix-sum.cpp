class Solution {
public:
    int missingInteger(vector<int>& nums) {

       int prefix = nums[0];
       for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1] + 1){
            prefix += nums[i];
        }
        else{
            break;
        }
       }
       while(find(nums.begin(), nums.end(), prefix) != nums.end()){
        prefix++;
       } 
       return prefix;
    }
};