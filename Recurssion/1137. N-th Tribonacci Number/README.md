# LeetCode 1137: N-th Tribonacci Number

## Problem
The Tribonacci sequence is defined as:

- `T(0) = 0`
- `T(1) = 1`
- `T(2) = 1`
- `T(n) = T(n-1) + T(n-2) + T(n-3)` for `n >= 3`

Given `n`, return `T(n)`.

## Approach
Use recursion with memoization to avoid recalculating the same Tribonacci values.

## Algorithm
1. Handle the base cases `n = 0`, `n = 1`, and `n = 2`.
2. Create a DP array initialized with `-1`.
3. If `dp[n]` is already calculated, return it.
4. Calculate the result using the previous three values.
5. Store the result in `dp[n]` and return it.

## Example
**Input:** `n = 4`

**Calculation:**
- `T(0) = 0`
- `T(1) = 1`
- `T(2) = 1`
- `T(3) = 1 + 1 + 0 = 2`
- `T(4) = 2 + 1 + 1 = 4`

**Output:** `4`

## Key Idea
Each Tribonacci number depends on the previous three numbers. Memoization stores calculated results so each value is computed only once.

## Complexity
- **Time:** `O(n)`
- **Space:** `O(n)` for the DP array and recursion stack.

## Concepts Used
- Recursion
- Base cases
- Dynamic programming
- Memoization