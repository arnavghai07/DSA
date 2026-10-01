class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool negative = num < 0;
        int temp = abs(num);

        string ans;

        while (temp != 0) {
            int dig = temp % 7;
            ans += to_string(dig);
            temp = temp / 7;
        }

        reverse(ans.begin(), ans.end());

        if (negative) {
            ans = "-" + ans;
        }

        return ans;
    }
};