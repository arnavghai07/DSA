class Solution {
public:
    int minimumSum(int num) {
        vector<int> dig;
        int temp = num;

        while(temp > 0){
            dig.push_back(temp % 10);
            temp /= 10;
        }
        sort(dig.begin(), dig.end());
        int n = dig.size();

        int num1 = dig[0] * 10 + dig[n-1];
        int num2 = dig[1] * 10 + dig[n-2];

        int s = num1 + num2;
        return s;
    }
};