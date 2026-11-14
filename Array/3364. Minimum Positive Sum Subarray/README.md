# 3364 – Minimum Positive Sum Subarray

## Problem
Given an integer array `nums` and two integers `l` and `r`, find the minimum positive sum of a subarray whose length is between `l` and `r` (inclusive).

If no such subarray exists, return `-1`.

## Approach: Brute Force

We use nested loops to generate all possible subarrays and calculate their sums.

### Algorithm
1. Initialize `ans` with `INT_MAX`.
2. Traverse the array using the starting index `i`.
3. Initialize `sum = 0` for every starting index.
4. Use another loop with index `j` to extend the subarray.
5. Add the current element to the sum.
6. Calculate the subarray length using `j - i + 1`.
7. If the length is within `[l, r]` and the sum is positive, update the minimum answer.
8. Stop extending when the length reaches `r`.
9. Return `-1` if no valid positive sum is found.

## Complexity Analysis

- **Time Complexity:** O(n × r) – We explore subarrays of maximum length `r` from each starting position.
- **Space Complexity:** O(1) – No additional data structures are used.

## Key Learning
This problem demonstrates the Brute Force technique, nested loops, subarray generation, and maintaining a minimum value while checking conditions.
