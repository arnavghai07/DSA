class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        vector<vector<int>> ans(n, vector<int>(n));
        int i = 1;

        while (top <= bottom && left <= right) {

            for (int p = left; p <= right; p++)
                ans[top][p] = i++;
            top++;

            for (int q = top; q <= bottom; q++)
                ans[q][right] = i++;
            right--;

            if (top <= bottom) {
                for (int p = right; p >= left; p--)
                    ans[bottom][p] = i++;
                bottom--;
            }

            if (left <= right) {
                for (int q = bottom; q >= top; q--)
                    ans[q][left] = i++;
                left++;
            }
        }

        return ans;
    }
};