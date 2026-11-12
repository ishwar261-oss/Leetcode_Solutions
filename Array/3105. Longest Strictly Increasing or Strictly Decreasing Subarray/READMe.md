# LeetCode 3105 – Longest Strictly Increasing or Strictly Decreasing Subarray

## Problem
Given an integer array `nums`, find the length of the longest subarray that is either strictly increasing or strictly decreasing.

A strictly increasing subarray has every next element greater than the previous element.

A strictly decreasing subarray has every next element smaller than the previous element.

## Approach: Greedy

We maintain three variables:

- `inc`: Length of the current strictly increasing subarray.
- `dec`: Length of the current strictly decreasing subarray.
- `ans`: Maximum length found so far.

### Algorithm
1. Initialize `inc`, `dec`, and `ans` to 1.
2. Traverse the array from index 1.
3. If the current element is greater than the previous element, increment `inc` and reset `dec` to 1.
4. If the current element is smaller than the previous element, increment `dec` and reset `inc` to 1.
5. If both elements are equal, reset both counters to 1.
6. Update the maximum answer and return it.

## Complexity Analysis

- **Time Complexity:** O(n) – Traverse the array once.
- **Space Complexity:** O(1) – Only three variables are used.

## Key Learning
This problem demonstrates the Greedy approach and how two counters can efficiently track increasing and decreasing sequences in a single traversal.
