class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        int val = n * 5 / 100;

        int sum = 0;

        for(int i = val; i < n - val; i++) {
            sum += arr[i];
        }

        double avg = (double)sum / (n - 2 * val);

        return avg;
    }
};