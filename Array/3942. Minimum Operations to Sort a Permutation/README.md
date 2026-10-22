# 3942. Minimum Operations to Sort a Permutation

**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Array, Permutation, Mathematics

## Problem

Given a permutation of integers from `0` to `n - 1`, sort it in increasing order using only these operations:

1. **Reverse:** Reverse the entire array.
2. **Left Rotate:** Move the first element to the end of the array.

Return the minimum number of operations needed to sort the array. If it is impossible, return `-1`.

## Approach: Cyclic Order and Case Analysis

The allowed operations only produce cyclic rotations of the original array and its reversed arrangement.

Therefore, the array can be sorted only if its elements follow increasing cyclic order in one of the two directions.

1. Find the index of `0`.
2. Use `check(1)` to verify the increasing cyclic direction.
3. Use `check(-1)` to verify the opposite cyclic direction.
4. For each valid direction, calculate the possible operation counts.
5. Return the minimum valid count, or `-1` if neither direction works.

## Example 1

**Input:** `nums = [0, 2, 1]`

**Output:** `2`

**Explanation:**

- Left rotate: `[2, 1, 0]`
- Reverse: `[0, 1, 2]`

Two operations are required.

## Example 2

**Input:** `nums = [1, 0, 2]`

**Output:** `2`

**Explanation:**

- Reverse: `[2, 0, 1]`
- Left rotate: `[0, 1, 2]`

Two operations are required.

## Example 3

**Input:** `nums = [2, 0, 1, 3]`

**Output:** `-1`

**Explanation:** The permutation cannot be transformed into increasing order using only the allowed operations.

## Algorithm

```text
Find the index of 0

ans = infinity

If the increasing cyclic direction is valid:
    ans = minimum of:
          ans, zero, n - zero + 2

If the opposite cyclic direction is valid:
    ans = minimum of:
          ans, zero + 2, n - zero

If ans is infinity:
    return -1

Return ans
```

## Key Idea

Instead of simulating every operation, determine whether the array follows a valid cyclic pattern.

- `step = 1` checks the forward cyclic direction.
- `step = -1` checks the opposite cyclic direction.
- Modular arithmetic (`% n`) allows indices to wrap around the array.

The minimum is calculated from the valid ways to combine reversals and rotations.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Auxiliary Space:** O(1)

Each direction is checked in one linear scan, and only a constant number of variables are used.

## Concepts Learned

- Cyclic permutations
- Modular arithmetic
- Array indexing
- Lambda functions in C++
- Case analysis
- Time and space complexity
