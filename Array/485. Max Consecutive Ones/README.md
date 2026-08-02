# 485. Max Consecutive Ones

> **Problem Link:** https://leetcode.com/problems/max-consecutive-ones/

## Problem Statement

Given a binary array `nums`, return the maximum number of consecutive `1`s in the array.

---

## Approach

Traverse the array while maintaining two variables:

- `count` → current streak of consecutive ones.
- `max_count` → maximum streak found so far.

Whenever a `1` is encountered, increase the current streak.

Whenever a `0` is encountered, reset the current streak to zero.

Update the maximum streak after every `1`. :contentReference[oaicite:1]{index=1}

---

## Algorithm

1. Initialize `count = 0`.
2. Initialize `max_count = 0`.
3. Traverse the array.
4. If current element is `1`
   - Increment `count`.
   - Update `max_count`.
5. Otherwise
   - Reset `count` to `0`.
6. Return `max_count`.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- Traversal
