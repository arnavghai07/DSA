
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            int n = i;
            bool self = true;

            while (n > 0) {
                int dig = n % 10;

                if (dig == 0 || i % dig != 0) {
                    self = false;
                    break;
                }

                n /= 10;
            }

            if (self) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
