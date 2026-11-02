# 462. Minimum Moves to Equal Array Elements II

**Difficulty:** Medium  
**Topics:** Array, Math, Sorting

## Problem
Given an integer array `nums`, find the minimum number of moves required to make all elements equal.

In one move, we can increment or decrement any element by 1.

## Approach: Sorting + Median

1. Sort the array in ascending order.
2. Find the median, which is the middle element.
3. Calculate the absolute difference between every element and the median.
4. Add all differences to get the minimum number of moves.
5. Return the total.

## Example

**Input:**
nums = [1, 10, 2, 9]

**Step 1: Sort the array**
[1, 2, 9, 10]

**Step 2: Find the median**
Median = 9

**Step 3: Calculate the moves**
|1 - 9| = 8
|2 - 9| = 7
|9 - 9| = 0
|10 - 9| = 1

**Step 4: Calculate the total**
8 + 7 + 0 + 1 = 16

**Output:**
16

## Algorithm

1. Sort `nums`.
2. Select `nums[nums.size() / 2]` as the median.
3. Initialize `moves = 0`.
4. Traverse the array and add `abs(num - median)` to `moves`.
5. Return `moves`.

## Key Idea

The median minimizes the sum of absolute differences between array elements and a target value.

Making every element equal to the median therefore requires the minimum number of moves.

## Complexity Analysis

- **Time Complexity:** O(n log n) — sorting the array.
- **Space Complexity:** O(1) auxiliary space, excluding the sorting implementation's stack space.

## Concepts Used

- Arrays
- Sorting
- Median
- Absolute Difference
- Greedy Approach