# LeetCode 2913: Subarrays Distinct Element Sum of Squares I

## Problem
Given an integer array `nums`, find the sum of the squares of the number of distinct elements in every subarray.

## Approach
Use recursion to generate all possible subarrays by fixing a starting index `i` and extending the ending index `j`.

Maintain a set to store distinct elements in the current subarray.

For each subarray:
1. Insert the current element into the set.
2. Calculate the number of distinct elements.
3. Add its square to the answer.
4. Recursively extend the subarray.
5. When the array ends, move to the next starting index.

## Algorithm
1. Start with `i = 0` and `j = 0`.
2. If `i` reaches the array size, return `0`.
3. If `j` reaches the array size, recursively start from `i + 1`.
4. Insert `nums[j]` into the set.
5. Calculate `cnt = set.size()`.
6. Return `cnt * cnt + solve(i, j + 1)`, passing the updated set.
7. Return the total sum.

## Example
Input: `nums = [1, 2, 1]`

| Subarray | Distinct count | Square |
|---|---:|---:|
| `[1]` | 1 | 1 |
| `[1, 2]` | 2 | 4 |
| `[1, 2, 1]` | 2 | 4 |
| `[2]` | 1 | 1 |
| `[2, 1]` | 2 | 4 |
| `[1]` | 1 | 1 |

Output: `15`

## Key Idea
Every subarray has a unique starting and ending index. Recursion explores all such combinations, while the set tracks distinct elements.

## Complexity
- **Time:** O(n² log n)
- **Space:** O(n²) worst-case recursion stack and set copies.

## Concepts Used
- Recursion
- Subarrays
- Sets
- Nested traversal
- Distinct element counting