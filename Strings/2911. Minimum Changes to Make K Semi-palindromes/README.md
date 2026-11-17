# 2911. Minimum Changes to Make K Semi-palindromes

**Difficulty:** Hard  
**Topics:** Dynamic Programming, Strings, Precomputation  
**Language:** C++

## Problem Description

Given a string `s` and an integer `k`, divide the string into exactly `k` non-empty contiguous substrings.

Each substring must be converted into a semi-palindrome using the minimum possible number of character changes.

Return the minimum total number of changes required.

## Approach: Precomputation + Dynamic Programming

### 1. Precompute Substring Costs

- Consider every substring of length at least 2.
- Find all proper divisors of its length.
- For every valid divisor `d`, divide characters into groups based on their positions modulo `d`.
- Compare characters from opposite ends of each group.
- Count mismatched pairs as required character changes.
- Store the minimum cost in `cost[i][j]`.

### 2. Dynamic Programming

Define:

`dp[i][parts]`

The minimum changes required to divide the suffix starting at index `i` into exactly `parts` semi-palindromes.

**Base Case:**

`dp[n][0] = 0`

**Transition:**

```text
dp[i][parts] = min(
    dp[i][parts],
    cost[i][j] + dp[j+1][parts-1]
)
```

Try every valid ending position `j` and select the minimum cost.

**Final Answer:**

`dp[0][k]`

## C++ Solution

```cpp
class Solution {
public:
    int minimumChanges(string s, int k) {
        int n = s.size();
        const int INF = 1e9;

        vector<vector<int>> cost(n, vector<int>(n, INF));

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int len = j - i + 1;

                for (int d = 1; d < len; d++) {
                    if (len % d != 0)
                        continue;

                    int changes = 0;

                    for (int offset = 0; offset < d; offset++) {
                        int l = i + offset;
                        int r = j - d + 1 + offset;

                        while (l < r) {
                            if (s[l] != s[r])
                                changes++;

                            l += d;
                            r -= d;
                        }
                    }

                    cost[i][j] = min(cost[i][j], changes);
                }
            }
        }

        vector<vector<int>> dp(n + 1,
                               vector<int>(k + 1, INF));

        dp[n][0] = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int parts = 1; parts <= k; parts++) {
                for (int j = i + 1; j < n; j++) {

                    if (dp[j + 1][parts - 1] == INF)
                        continue;

                    dp[i][parts] = min(
                        dp[i][parts],
                        cost[i][j] + dp[j + 1][parts - 1]
                    );
                }
            }
        }

        return dp[0][k];
    }
};
```

## Complexity Analysis

- **Precomputation:** Approximately O(n³ log n).
- **DP Time Complexity:** O(n² × k).
- **Space Complexity:** O(n² + nk).

## Key Learnings

- Understanding semi-palindromes.
- Finding proper divisors of a number.
- Precomputing costs for all substrings.
- Applying partition-based dynamic programming.
- Using state transitions to minimize total operations.

**Problem Link:** https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
