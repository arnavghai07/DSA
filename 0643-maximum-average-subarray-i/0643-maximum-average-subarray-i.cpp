class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double avg = INT_MIN;

        int sum = 0;

        for(int right = 0; right < nums.size(); right++){
            sum +=  nums[right];

            while(right-left+1 > k){
                sum -= nums[left];
                left++;
            }
            
            if(right-left+1 == k){
                avg = max(avg,(double)sum / k);
            }
        }
        return avg;
    }
};