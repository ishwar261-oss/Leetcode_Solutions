```md
# Majority Element

> **Problem Link:** https://leetcode.com/problems/majority-element/

## Problem Statement

Given an array `nums` of size `n`, return the majority element. The majority element is the element that appears more than `⌊n / 2⌋` times.

---

## Approach

Use **Moore's Voting Algorithm** to find the majority element in a single traversal while maintaining constant extra space.

---

## Algorithm

1. Initialize a candidate and count.
2. Traverse the array.
3. If count becomes zero, choose the current element as the new candidate.
4. Increase or decrease the count depending on whether the current element matches the candidate.
5. Return the candidate.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time | **O(n)** |
| Space | **O(1)** |

---

## Tags

- Arrays
- Moore's Voting Algorithm
- Greedy
```
