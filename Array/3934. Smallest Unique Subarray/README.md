# 3934. Smallest Unique Subarray

**Difficulty:** Hard

## Problem Statement

Given an integer array `nums`, find the minimum length of a subarray that is not identical to any other subarray in the array.

Two subarrays are considered identical if they have the same length and the same elements in the same order.

Return the minimum possible length of a unique subarray.

## Approach

**Binary Search + Double Rolling Hash**

- Use binary search to find the minimum possible subarray length.
- For each length, generate all possible subarrays using a sliding window.
- Use rolling hash to represent each subarray efficiently.
- Maintain the frequency of every subarray hash using an unordered map.
- If any hash appears exactly once, a unique subarray of that length exists.
- If a unique subarray exists, try a smaller length; otherwise, try a larger length.
- Use two different hash functions to reduce the possibility of hash collisions.

## Complexity Analysis

- **Time Complexity:** O(n log n), where n is the size of the array.
- **Space Complexity:** O(n), for storing powers and hash frequencies.

## Key Concepts

- Binary Search
- Sliding Window
- Rolling Hash
- Hash Map
- Modular Arithmetic