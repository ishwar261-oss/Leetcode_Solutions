# 2124. Check if All A's Appears Before All B's

**Difficulty:** Easy

**Topics:** String

## Problem Statement

Given a string containing only `a` and `b`, check whether all occurrences of `a` appear before all occurrences of `b`.

Return `true` if the condition is satisfied; otherwise, return `false`.

## Approach: Single Traversal

1. Traverse the string using a loop.
2. Check each adjacent pair of characters.
3. If the current character is `b` and the next character is `a`, return `false`.
4. If no such pair exists, return `true`.

## Complexity Analysis

- **Time Complexity:** O(n) – Only one traversal of the string is required.
- **Space Complexity:** O(1) – Constant extra space is used.

## Key Concepts Learned

- String traversal
- Character comparison
- Adjacent element checking
- Early return

## LeetCode

[2124. Check if All A's Appears Before All B's](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/)