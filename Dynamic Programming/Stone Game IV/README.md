# LeetCode 1510 — Stone Game IV

## Problem

There are `n` stones.

Alice and Bob play a game.

Alice goes first.

On each turn, a player can remove any **positive perfect square** number of stones.

Perfect squares are:

```text
1, 4, 9, 16, 25, 36, ...
```

The player who removes the **last stone** wins.

Both players play optimally.

We need to determine whether **Alice can win**.

---

## What is a Perfect Square?

A perfect square is a number that can be written as:

```text
x × x
```

Examples:

```text
1  = 1 × 1
4  = 2 × 2
9  = 3 × 3
16 = 4 × 4
25 = 5 × 5
```

---

## Example

### Input

```text
n = 7
```

Alice can remove `4` stones:

```text
7 → 3
```

The game then continues with `3` stones.

The important thing is not just choosing a square once.

Both Alice and Bob play optimally, so we need to check **all possible moves**.

---

## DP Approach

We use Dynamic Programming.

Define:

```text
dp[i]
```

as:

> `true` if the player whose turn it is can win when there are `i` stones.

And:

```text
dp[i] = false
```

means:

> The current player will lose if both players play optimally.

---

## Base Case

When there are `0` stones:

```text
dp[0] = false
```

Why?

If it is your turn and there are no stones left, you cannot make a move.

So you lose.

---

## Main Idea

For every number of stones `i`, try removing every possible perfect square.

For example, if:

```text
i = 10
```

we can remove:

```text
1
4
9
```

After removing a square, check the opponent's state.

If:

```text
dp[i - square] == false
```

then the opponent loses.

Therefore, the current player can win:

```text
dp[i] = true
```

---

## Important Game DP Rule

The key rule is:

```text
If there is at least one move
that makes the opponent lose,
the current player wins.
```

In code:

```cpp
if (!dp[i - square]) {
    dp[i] = true;
    break;
}
```

---

## Algorithm

1. Create a DP array of size `n + 1`.
2. Set:
   ```text
   dp[0] = false
   ```
3. For every `i` from `1` to `n`:
   - Try every perfect square `j × j`.
   - Make sure:
     ```text
     j × j <= i
     ```
   - Check:
     ```text
     dp[i - j × j]
     ```
4. If the resulting state is losing for the opponent, mark `dp[i]` as `true`.
5. Return `dp[n]`.

---

## C++ Code

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    bool winnerSquareGame(int n) {

        vector<bool> dp(n + 1, false);

        // dp[0] = false
        // No stones means the current player loses.

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j * j <= i; j++) {

                int square = j * j;

                // If opponent loses,
                // current player wins.
                if (!dp[i - square]) {

                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
```

---

## Dry Run

Suppose:

```text
n = 5
```

### `i = 1`

Possible move:

```text
1 - 1 = 0
```

```text
dp[0] = false
```

Therefore:

```text
dp[1] = true
```

---

### `i = 2`

Possible move:

```text
2 - 1 = 1
```

```text
dp[1] = true
```

No winning move.

Therefore:

```text
dp[2] = false
```

---

### `i = 3`

Remove `1`:

```text
3 → 2
```

And:

```text
dp[2] = false
```

Therefore:

```text
dp[3] = true
```

---

## Complexity

### Time Complexity

```text
O(n√n)
```

For every `i`, we try all perfect squares up to `i`.

### Space Complexity

```text
O(n)
```

We use the DP array.

---

## Concepts Used

- Dynamic Programming
- Game Theory
- Boolean DP
- Perfect Squares
- Optimal Strategy

---

## Key Takeaway

For game problems, remember:

```text
Current state is WINNING
        ↓
if there is at least one move
        ↓
that makes the opponent's state LOSING
```

In short:

```text
WIN = move to LOSE
LOSE = all moves lead to WIN
```

---

## Tags

`Dynamic Programming` `Game Theory` `Math` `Perfect Squares` `Boolean DP`