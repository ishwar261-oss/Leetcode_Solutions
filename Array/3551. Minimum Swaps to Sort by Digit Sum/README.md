# 3551. Minimum Swaps to Sort by Digit Sum

## Problem
Given an integer array `nums`, sort it in ascending order by:
1. Digit sum in ascending order.
2. If digit sums are equal, value in ascending order.

Return the minimum number of swaps required to transform `nums` into this sorted order.

## Approach
- Store each element along with its digit sum and original index.
- Sort the elements by digit sum, then by value.
- Compare each element's original index with its target position.
- Count the swaps needed to place every element in its correct position using cycle detection.

## Algorithm
1. Create pairs containing `(digitSum, value, originalIndex)`.
2. Sort the pairs by `digitSum`, then `value`.
3. Maintain a `visited` array to track processed positions.
4. For each unvisited position, follow the cycle of misplaced elements.
5. A cycle of length `k` requires `k - 1` swaps.
6. Add the swaps from all cycles and return the total.

## Example
Input: `nums = [37, 100]`

Digit sums:
- `37` → 10
- `100` → 1

Sorted array: `[100, 37]`

One swap is required.

Output: `1`

## Key Idea
Sorting determines the target positions. Cycle detection calculates the minimum swaps needed to reach those positions.

## Complexity
- Time: `O(n log n)`
- Space: `O(n)`

## Concepts
- Digit Sum
- Sorting with Custom Comparators
- Original Indices
- Permutation Cycles
- Minimum Swaps