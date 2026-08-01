# 0001. Two Sum

> **Problem Link:** https://leetcode.com/problems/two-sum/

## Problem Statement

Given an integer array `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

The answer can be returned in any order.

---

## Example

### Input

```text
nums = [1,2,3,4,5]
target = 7
```

### Output

```text
Indices of number : 1 4
```

### Explanation

```text
nums[1] + nums[4] = 2 + 5 = 7
```

---

## Approach (Brute Force)

This solution checks every possible pair of elements in the array.

- The outer loop selects one element.
- The inner loop checks all remaining elements.
- If the sum equals the target, the indices are returned immediately.
- If no pair is found, an empty vector is returned.

Since every pair is examined exactly once, the algorithm always finds the correct answer if one exists.

---

## Algorithm

1. Find the size of the array.
2. Traverse the array using two nested loops.
3. Compare the sum of every pair.
4. If the sum equals the target, return their indices.
5. If no valid pair exists, return an empty vector.

---

## Dry Run

Input

```text
nums = [1,2,3,4,5]
target = 7
```

| i | j | nums[i] | nums[j] | Sum | Result |
|---|---|--------:|--------:|----:|--------|
| 0 | 1 | 1 | 2 | 3 | Continue |
| 0 | 2 | 1 | 3 | 4 | Continue |
| 0 | 3 | 1 | 4 | 5 | Continue |
| 0 | 4 | 1 | 5 | 6 | Continue |
| 1 | 2 | 2 | 3 | 5 | Continue |
| 1 | 3 | 2 | 4 | 6 | Continue |
| 1 | 4 | 2 | 5 | **7** | ✅ Pair Found |

Returned Indices:

```text
{1, 4}
```

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
- Nested Loops