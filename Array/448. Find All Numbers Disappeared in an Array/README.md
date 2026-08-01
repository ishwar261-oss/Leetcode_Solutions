<<<<<<< HEAD
# 448. Find All Numbers Disappeared in an Array

> **Problem Link:** https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

## Problem Statement

Given an array `nums` of size `n` where each integer is in the range `[1, n]`, some elements appear twice while others appear once.

Return all the integers in the range `[1, n]` that do **not** appear in the array.

---

## Approach

The array values are in the range `[1, n]`, so each value can be mapped to an index.

Traverse the array and mark the corresponding index as **visited** by making its value negative.

Finally, every index whose value remains positive represents a missing number.

This allows us to solve the problem without using extra space.

---

## Algorithm

1. Traverse the array.
2. For every element:
   - Find its corresponding index.
   - Mark that index as negative.
3. Traverse the array again.
4. If an element is positive:
   - Its index + 1 is a missing number.
5. Return all missing numbers.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- In-place Hashing
=======
# 448. Find All Numbers Disappeared in an Array

> **Problem Link:** https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

## Problem Statement

Given an array `nums` of size `n` where each integer is in the range `[1, n]`, some elements appear twice while others appear once.

Return all the integers in the range `[1, n]` that do **not** appear in the array.

---

## Approach

The array values are in the range `[1, n]`, so each value can be mapped to an index.

Traverse the array and mark the corresponding index as **visited** by making its value negative.

Finally, every index whose value remains positive represents a missing number.

This allows us to solve the problem without using extra space.

---

## Algorithm

1. Traverse the array.
2. For every element:
   - Find its corresponding index.
   - Mark that index as negative.
3. Traverse the array again.
4. If an element is positive:
   - Its index + 1 is a missing number.
5. Return all missing numbers.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- In-place Hashing
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Index Mapping