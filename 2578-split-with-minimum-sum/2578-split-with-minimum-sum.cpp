class Solution {
public:
    int splitNum(int num) {
        int num1 = 0;
        int num2 = 0;

        vector<int> digit;

        int temp = num;

        while (temp > 0) {
            int dig = temp % 10;
            digit.push_back(dig);
            temp /= 10;
        }

        sort(digit.begin(), digit.end());

        for (int i = 0; i < digit.size(); i++) {
            if (i % 2 == 0) {
                num1 = num1 * 10 + digit[i];
            } else {
                num2 = num2 * 10 + digit[i];
            }
        }

        return num1 + num2;
    }
};