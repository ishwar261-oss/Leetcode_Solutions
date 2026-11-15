# LeetCode 1524 – Number of Sub-arrays With Odd Sum

**Difficulty:** Medium  
**Topics:** Array, Prefix Sum, Mathematics, Parity

## Problem Statement

Given an array of integers `arr`, return the number of subarrays with an odd sum.

Since the answer can be very large, return it modulo `10^9 + 7`.

## Approach: Prefix Sum + Parity

The key observation is that a subarray has an odd sum when its two prefix sums have different parity.

- Even + Even = Even
- Odd + Odd = Even
- Even + Odd = Odd

We maintain two counters:

- **even:** Counts the number of even prefix sums.
- **odd:** Counts the number of odd prefix sums.

Initially, `even = 1` because the empty prefix has a sum of zero.

For each array element:

1. Update the prefix sum.
2. If the prefix sum is even, add the count of previous odd prefix sums to the answer.
3. If the prefix sum is odd, add the count of previous even prefix sums to the answer.
4. Update the corresponding parity counter.
5. Apply modulo `10^9 + 7`.

## Complexity Analysis

- **Time Complexity:** O(n) – We traverse the array only once.
- **Space Complexity:** O(1) – We use a constant number of variables.

## Key Learnings

- Understanding prefix sums and their applications.
- Using parity (even/odd) to simplify subarray problems.
- Counting subarrays without generating every possible subarray.
- Optimizing brute-force solutions from O(n²) to O(n).

## Important Concept

A subarray sum can be calculated by subtracting two prefix sums.

To obtain an odd sum, those prefix sums must have different parity.

**Pattern:** Prefix Sum + Counting Even/Odd Prefixes.