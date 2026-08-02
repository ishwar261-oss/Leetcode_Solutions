```md
# Single Number

> **Problem Link:** https://leetcode.com/problems/single-number/

## Problem Statement

Given a non-empty array of integers where every element appears twice except one, find that single element.

---

## Approach

Use the XOR operation.

Since identical numbers cancel each other out (`a ^ a = 0`), XORing every element leaves only the unique number.

---

## Algorithm

1. Initialize `ans = 0`.
2. Traverse the array.
3. XOR every element with `ans`.
4. Return `ans`.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time | **O(n)** |
| Space | **O(1)** |

---

## Tags

- Arrays
- Bit Manipulation
- XOR
```
