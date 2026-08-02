# 974. Subarray Sums Divisible by K

> **Problem Link:** https://leetcode.com/problems/subarray-sums-divisible-by-k/

## Problem Statement

Given an integer array `nums` and an integer `k`, return the number of non-empty subarrays whose sum is divisible by `k`.

---

## Approach

Generate every possible subarray using two nested loops.

For each subarray:

- Calculate its sum.
- Check whether the sum is divisible by `k`.
- If divisible, increment the count.

Return the total number of valid subarrays.

---

## Algorithm

1. Initialize count as `0`.
2. Traverse every starting index.
3. Maintain the sum while extending the subarray.
4. If the sum is divisible by `k`, increment the count.
5. Return the count.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n²)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- Brute Force
- Mathematics
