class Solution {
public:
    int largestInteger(int num) {
        vector<int> digits, odd, even;

        while(num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        reverse(digits.begin(), digits.end());

        for(int d : digits) {
            if(d % 2)
                odd.push_back(d);
            else
                even.push_back(d);
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        int o = 0, e = 0;

        for(int &d : digits) {
            if(d % 2)
                d = odd[o++];
            else
                d = even[e++];
        }

        int ans = 0;

        for(int d : digits)
            ans = ans * 10 + d;

        return ans;
    }
};