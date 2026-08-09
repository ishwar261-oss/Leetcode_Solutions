# 1140. Stone Game II

## Problem

There are several piles of stones.

Alice and Bob take turns taking stones.

At the beginning:

```text
M = 1
```

On each turn, the current player can take the first `X` remaining piles where:

```text
1 <= X <= 2 * M
```

After taking `X` piles:

```text
M = max(M, X)
```

Both players play optimally.

The goal is to find the **maximum number of stones Alice can get**.

---

## Example

### Input

```text
piles = [2, 7, 9, 4, 4]
```

### Output

```text
10
```

Alice can get a maximum of `10` stones when both players play optimally.

---

## Approach

This problem can be solved using:

- Dynamic Programming
- Recursion
- Memoization
- Suffix Sum
- Minimax / Optimal Play

---

## DP State

We use:

```text
dp[i][M]
```

It means:

> The maximum number of stones the current player can get starting from index `i` when the current value of `M` is `M`.

---

## Suffix Sum

We calculate a suffix sum array.

For example:

```text
piles = [2, 7, 9, 4, 4]
```

The suffix sums are:

```text
[26, 24, 17, 8, 4, 0]
```

So:

```text
suffix[i]
```

represents the total number of stones remaining from index `i`.

This lets us calculate the stones available quickly.

---

## Main Formula

Suppose the current player starts at index `i`.

If they take `X` piles:

```text
nextM = max(M, X)
```

The opponent starts from:

```text
i + X
```

The opponent can get:

```text
dp[i + X][nextM]
```

Therefore, the current player gets:

```text
suffix[i] - dp[i + X][nextM]
```

We take the maximum over all possible `X`.

```text
dp[i][M] =
max(
    suffix[i] - dp[i + X][max(M, X)]
)
```

where:

```text
1 <= X <= 2 * M
```

---

## Algorithm

1. Create a suffix sum array.
2. Define a recursive DP function:
   ```text
   solve(i, M)
   ```
3. If all piles are taken, return `0`.
4. If the state was already calculated, return the stored value.
5. Try every possible `X` from:
   ```text
   1 to 2 * M
   ```
6. Calculate the opponent's result.
7. Calculate the current player's stones:
   ```text
   remaining stones - opponent's stones
   ```
8. Store the maximum result in `dp[i][M]`.
9. Start with:
   ```text
   solve(0, 1)
   ```

---

## Example

### Input

```text
piles = [2, 7, 9, 4, 4]
```

Initially:

```text
M = 1
```

Alice can take only:

```text
X = 1
```

After taking one pile:

```text
M = max(1, 1)
M = 1
```

Bob then makes the next optimal move.

The DP explores all possible choices for both players and finds that Alice can get:

```text
10
```

---

## C++ Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int solve(int i, int M,
              vector<int>& suffix,
              vector<vector<int>>& dp) {

        int n = suffix.size() - 1;

        if (i >= n)
            return 0;

        if (dp[i][M] != -1)
            return dp[i][M];

        int ans = 0;

        for (int X = 1;
             X <= 2 * M && i + X <= n;
             X++) {

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
            suffix[i] =
                suffix[i + 1] + piles[i];
        }

        vector<vector<int>> dp(
            n,
            vector<int>(n + 1, -1)
        );

        return solve(0, 1, suffix, dp);
    }
};
```

---

## Complexity

### Time Complexity

```text
O(n³)
```

There are approximately `O(n²)` DP states and each state can try up to `O(n)` choices.

### Space Complexity

```text
O(n²)
```

The DP table requires `O(n²)` memory.

The recursion stack requires up to `O(n)` additional space.

---

## Concepts Used

- Dynamic Programming
- Recursion
- Memoization
- Minimax
- Suffix Sum
- Optimal Game Strategy

---

## Key Takeaway

The important idea is:

```text
Current player's stones
=
All remaining stones
-
Opponent's maximum stones
```

This converts the two-player game into a single DP maximization problem.

---

## Tags

`Dynamic Programming` `Recursion` `Memoization` `Game Theory` `Suffix Sum` `Minimax`