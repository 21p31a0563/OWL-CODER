

class Solution {
public:
    int numSquares(int n) {
        const int inf = 1e9;
      vector<vector<int>> dp(101, vector<int>(n + 1, inf));

        for (int i = 0; i <= 100; ++i)
            dp[i][0] = 0;

        for (int i = 1; i <= 100; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i * i <= j)
                    dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - i * i]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[100][n];
    }
};
