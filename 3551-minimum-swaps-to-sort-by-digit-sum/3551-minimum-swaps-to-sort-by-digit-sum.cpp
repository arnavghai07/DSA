
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arr;

        for (int num : nums) {
            int x = num, sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            arr.push_back({sum, num});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[arr[i].second] = i;
        }

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            p[i] = pos[nums[i]];
        }

        int swaps = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] || p[i] == i)
                continue;

            int len = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = p[j];
                len++;
            }

            swaps += len - 1;
        }

        return swaps;
    }
};
