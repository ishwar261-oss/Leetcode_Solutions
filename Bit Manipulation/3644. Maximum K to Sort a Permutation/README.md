# 3644. Maximum K to Sort a Permutation

## Problem
Given a permutation `nums` of numbers from `0` to `n - 1`, find the maximum possible value of `k` that allows the permutation to be sorted using the allowed bitwise AND swap operation.

## Approach
1. Traverse the array.
2. If `nums[i] != i`, the element is not at its correct index.
3. Use bitwise OR (`|=`) to combine the values of all misplaced elements.
4. Return the result.

## Example
Input: nums = [0, 2, 1]

Output: 3

Explanation:
The misplaced elements are 2 and 1.
Their bitwise OR is `2 | 1 = 3`.

## Algorithm
1. Initialize `ans = 0`.
2. Iterate through the array.
3. If `nums[i] != i`, update `ans = ans | nums[i]`.
4. Return `ans`.

## Complexity Analysis
- Time Complexity: O(n)
- Auxiliary Space: O(1)

## Key Concepts
- Permutations
- Bitwise OR
- Array traversal
- Correct index checking