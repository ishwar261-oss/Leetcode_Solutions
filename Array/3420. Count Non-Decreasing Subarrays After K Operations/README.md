# 3420. Count Non-Decreasing Subarrays After K Operations

## Problem
Given an integer array `nums` and an integer `k`, count the number of subarrays that can be made **non-decreasing** using at most `k` operations.

In one operation, you can increment any element of the selected subarray by `1`.

Each subarray is considered independently.

## Approach
1. Use a sliding window to maintain a valid subarray.
2. Process the array from right to left.
3. Use a monotonic deque to maintain groups of values that need to be increased.
4. Calculate the number of operations required to make the current window non-decreasing.
5. If the required operations become greater than `k`, move the right pointer and reduce the cost.
6. For every valid window, count all valid subarrays ending within the current range.
7. Add the number of valid subarrays to the answer.

## Example

Input:
nums = [6, 3, 1, 2, 4, 4]
k = 7

Output:
17

Explanation:
There are 21 total subarrays.

The following 4 subarrays cannot be made non-decreasing using at most 7 operations:

[6, 3, 1]
[6, 3, 1, 2]
[6, 3, 1, 2, 4]
[6, 3, 1, 2, 4, 4]

Therefore:

21 - 4 = 17

## Algorithm
1. Initialize a deque to store `(value, count)` pairs.
2. Start traversing the array from right to left.
3. For the current value, merge smaller values from the back of the deque.
4. Calculate the operations required to increase those smaller values.
5. Add the current value and its count to the deque.
6. If the total operations exceed `k`, move the right pointer to reduce the window.
7. Once the window is valid, add `right - left + 1` to the answer.
8. Continue until the entire array is processed.
9. Return the total number of valid subarrays.

## Key Idea
To make a subarray non-decreasing, smaller elements may need to be increased to match the required larger value.

A **monotonic deque** helps maintain these values efficiently, while the **sliding window** ensures that the required number of operations never exceeds `k`.

## Complexity Analysis
- Time Complexity: O(n)
- Auxiliary Space Complexity: O(n)

## Concepts Used
- Arrays
- Sliding Window
- Two Pointers
- Monotonic Deque
- Greedy Approach
- Counting Subarrays
- 64-bit Integer