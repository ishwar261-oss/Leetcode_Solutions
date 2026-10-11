# 2778. Sum of Squares of Special Elements

**Platform:** LeetCode  
**Difficulty:** Easy  
**Topic:** Arrays, Basic Math

## Problem
Given a 0-indexed integer array `nums` of length `n`, calculate the sum of squares of all elements whose **1-based index divides `n`**.

An element at position `i` is special if `n % i == 0`.

Return the sum of squares of all special elements.

## Example

**Input:**
```text
nums = [1, 2, 3, 4]
```

**Output:**
```text
21
```

**Explanation:**

- `n = 4`
- Special positions: `1`, `2`, `4`
- Corresponding elements: `1`, `2`, `4`
- Sum of squares: `1² + 2² + 4² = 21`

## Approach
1. Find the length `n` of the array.
2. Traverse positions from `1` to `n`.
3. Check whether `n % i == 0`.
4. If true, add the square of `nums[i - 1]` to the sum.
5. Return the final sum.

## Algorithm
```text
sum = 0
n = size of nums

for i = 1 to n:
    if n % i == 0:
        sum = sum + nums[i - 1] * nums[i - 1]

return sum
```

## Key Idea
The array uses **0-based indexing**, but the problem defines special elements using **1-based positions**. Therefore, use `nums[i - 1]` to access the element at position `i`.

## Complexity Analysis
- **Time Complexity:** O(n) — traverses all positions once.
- **Space Complexity:** O(1) — uses constant extra space.

## Concepts Used
- Array traversal
- Modulo operator (`%`)
- 0-based and 1-based indexing
- Squaring numbers
- Conditional statements