
# LeetCode 1498: Number of Subsequences That Satisfy the Given Sum Condition

## Problem
Given an array `nums` and an integer `target`, count the non-empty subsequences where:

min(subsequence) + max(subsequence) <= target

Return the answer modulo 10^9 + 7.

## Example
Input: nums = [3,5,6,7], target = 9
Output: 4

Explanation:
Valid subsequences are [3], [3,5], [3,6], [3,5,6].

## Approach 1: Recursion (Pick / Not Pick)

For every element, make two choices:
1. Pick the current element.
2. Do not pick the current element.

When all elements have been processed:
- Ignore the empty subsequence.
- Find the minimum and maximum of the selected elements.
- If their sum <= target, count the subsequence.

### Algorithm
1. Start from index 0 with an empty subsequence.
2. Pick the current element and recurse.
3. Remove the element and recurse without picking it.
4. At the base case, check the minimum and maximum.
5. Count valid subsequences.

### Complexity
- Time: O(n * 2^n)
- Auxiliary Space: O(n)

Note: This approach is for learning recursion and will cause TLE for large inputs.

## Approach 2: Sorting + Two Pointers (Optimal)

### Key Idea
After sorting, if nums[left] + nums[right] <= target, then nums[left] can be the minimum and nums[right] can be the maximum.

Every element between them can independently be picked or skipped.

Number of valid subsequences for this range:

2^(right - left)

### Algorithm
1. Sort the array.
2. Precompute powers of 2 modulo 10^9 + 7.
3. Initialize left = 0 and right = n - 1.
4. If nums[left] + nums[right] <= target:
   - Add 2^(right - left) to the answer.
   - Increment left.
5. Otherwise, decrement right.
6. Return the answer modulo 10^9 + 7.

### Complexity
- Time: O(n log n)
- Auxiliary Space: O(n)

## Key Takeaway
Recursion explores every possible subsequence using pick/not-pick decisions. Sorting and two pointers avoid generating each subsequence individually, making the solution efficient enough for the constraints.
