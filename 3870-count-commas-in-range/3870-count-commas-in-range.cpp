class Solution {
public:
    int countCommas(int n) {
        long long count = 0;

        if (n >= 1000) {
            count += min(n, 999999) - 1000 + 1;
        }

        if (n >= 1000000) {
            count += 2LL * (min(n, 999999999) - 1000000 + 1);
        }

        if (n >= 1000000000) {
            count += 3LL * (n - 1000000000 + 1);
        }

        return count;
    }
};