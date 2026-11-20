# LeetCode 3041 – Maximize Consecutive Elements in an Array After Modification

**Difficulty:** Hard  
**Topics:** Array, Sorting, Dynamic Programming

## Problem Statement

Given an integer array `nums`, you can increase each element by at most 1.

Find the maximum possible length of a subsequence containing consecutive integers after performing the allowed modifications.

## Approach: Sorting + Dynamic Programming

First, sort the array in ascending order.

Maintain two DP states:

- `dp1`: Longest consecutive subsequence when the current element is not increased.
- `dp2`: Longest consecutive subsequence when the current element is increased by 1.

For every element, compare it with the previous element.

### Algorithm

1. Sort the array.
2. Initialize two DP variables to track consecutive subsequence lengths.
3. If the current element is equal to the previous element, use the duplicate to extend a sequence by increasing it.
4. If the current element is one greater than the previous element, extend the existing consecutive sequence.
5. Otherwise, start a new sequence.
6. Maintain the maximum length throughout the traversal.

## Example

**Input:** `[1, 1, 2, 2, 3]`

**Output:** `4`

**Explanation:**

By increasing selected elements by 1, we can obtain the consecutive subsequence:

`[1, 2, 3, 4]`

Therefore, the maximum length is 4.

## Complexity Analysis

- **Time Complexity:** O(n log n) – Sorting the array takes O(n log n), followed by a linear DP traversal.
- **Space Complexity:** O(1) auxiliary space, excluding sorting implementation.

## Key Learnings

- Sorting before applying dynamic programming.
- Maintaining multiple DP states.
- Handling duplicate elements.
- Building consecutive subsequences.
- Greedy decisions combined with DP.

**Pattern:** Sorting + Dynamic Programming.