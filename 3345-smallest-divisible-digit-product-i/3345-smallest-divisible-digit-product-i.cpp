class Solution {
public:
    int smallestNumber(int n, int t) {

        for (int i = n; ; i++) { 
            int mul = 1;
            int temp = i;

            while (temp > 0) {
                int digit = temp % 10;
                mul *= digit;
                temp /= 10;
            }

            if (mul % t == 0) {
                return i;
            }
        }
    }
};