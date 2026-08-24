# 1872. Stone Game VIII

## Problem

Alice and Bob play a game with stones arranged in a row.

On each turn:

1. Choose `x > 1` stones from the left.
2. Remove those stones.
3. Add their sum to the current player's score.
4. Put a new stone containing that sum at the left.

The game ends when only one stone remains.

Alice wants to maximize:

```text
Alice's score - Bob's score
```

Bob wants to minimize it.

Return the final score difference when both play optimally.

## Example

```text
Input:
[-1, 2, -3, 4, -5]

Output:
5
```

## Approach

The key observation is that every time we merge stones from the left, the new stone is a **prefix sum**.

For:

```text
[-1, 2, -3, 4, -5]
```

the prefix sums are:

```text
[-1, 1, -2, 2, -3]
```

So instead of simulating the actual stones, we can work with these prefix sums.

### DP Idea

Let `ans` represent the best score difference that can be obtained from the current position onward.

Initially, if all remaining stones are taken:

```text
ans = prefix[n - 1]
```

Then move from right to left.

For every prefix sum:

```text
ans = max(ans, prefix[i] - ans)
```

There are two choices:

### Choice 1 — Skip

Keep the current best:

```text
ans
```

### Choice 2 — Take

Take the current prefix sum and subtract the opponent's best result:

```text
prefix[i] - ans
```

Therefore:

```text
ans = max(ans, prefix[i] - ans)
```

## Algorithm

1. Convert `stones` into prefix sums.
2. Set:
   ```text
   ans = last prefix sum
   ```
3. Traverse the prefix sums from right to left.
4. Update:
   ```text
   ans = max(ans, prefix[i] - ans)
   ```
5. Return `ans`.

## Example

```text
stones = [-1, 2, -3, 4, -5]
```

Prefix sums:

```text
[-1, 1, -2, 2, -3]
```

Start:

```text
ans = -3
```

Process `2`:

```text
ans = max(-3, 2 - (-3))
    = 5
```

Process `-2`:

```text
ans = max(5, -2 - 5)
    = 5
```

Process `1`:

```text
ans = max(5, 1 - 5)
    = 5
```

Final:

```text
5
```

## Key Idea

The actual game can be reduced to a game on **prefix sums**.

```text
Original Array
      ↓
Prefix Sums
      ↓
Process Right → Left
      ↓
max(ans, prefix[i] - ans)
      ↓
Final Score Difference
```

## Important Formula

```text
ans = max(ans, prefix[i] - ans)
```

This represents the two choices:

```text
Skip current prefix → ans

Take current prefix → prefix[i] - ans
```

## Complexity

### Time Complexity

```text
O(n)
```

We traverse the array a constant number of times.

### Space Complexity

```text
O(1)
```

The prefix sums are stored directly in the input array.

## Concepts Used

- Prefix Sum
- Dynamic Programming
- Game Theory
- Greedy Optimization
- In-place Array Modification
- Score Difference
- Reverse Traversal