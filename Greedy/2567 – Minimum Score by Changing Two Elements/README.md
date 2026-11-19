# LeetCode 2567 – Minimum Score by Changing Two Elements

**Difficulty:** Medium  
**Topics:** Array, Sorting, Greedy

## Problem Statement

Given an integer array `nums`, you can change at most two elements to any value.

The score of an array is the difference between its maximum and minimum elements.

Return the minimum possible score after changing at most two elements.

## Approach: Sorting + Greedy

First, sort the array in ascending order.

After sorting, the smallest elements are at the beginning and the largest elements are at the end.

There are three possible cases:

1. Change the two largest elements. The remaining score is `nums[n-3] - nums[0]`.
2. Change the largest and the two smallest boundary elements. The remaining score is `nums[n-2] - nums[1]`.
3. Change the two smallest elements. The remaining score is `nums[n-1] - nums[2]`.

Calculate all three possibilities and return the minimum score.

## Example

**Input:** `[1, 4, 7, 8, 5]`

**Sorted Array:** `[1, 4, 5, 7, 8]`

**Output:** `3`

**Explanation:**

By changing the appropriate two elements, the minimum possible difference between the maximum and minimum elements becomes 3.

## Complexity Analysis

- **Time Complexity:** O(n log n) – Sorting the array.
- **Space Complexity:** O(1) auxiliary space, excluding sorting implementation.

## Key Learnings

- Sorting to simplify array problems.
- Greedy approach.
- Finding minimum and maximum differences.
- Handling multiple possible cases efficiently.

**Pattern:** Sorting + Greedy + Array.