#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int solve(int i, int M, vector<int>& suffix,
              vector<vector<int>>& dp) {

        int n = suffix.size() - 1;

        if (i >= n) return 0;

        if (dp[i][M] != -1) return dp[i][M];

        int ans = 0;

        for (int X = 1; X <= 2 * M && i + X <= n; X++) {

            int nextM = max(M, X);

            int opponent = solve(
                i + X,
                nextM,
                suffix,
                dp
            );

            int current = suffix[i] - opponent;

            ans = max(ans, current);
        }

        return dp[i][M] = ans;
    }

    int stoneGameII(vector<int>& piles) {

        int n = piles.size();

       vector<int> suffix(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }
    vector<vector<int>> dp(
            n,
            vector<int>(n + 1, -1)
        );

        return solve(0, 1, suffix, dp);
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> piles(n);

    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    Solution obj;

    cout << obj.stoneGameII(piles);

    return 0;
}