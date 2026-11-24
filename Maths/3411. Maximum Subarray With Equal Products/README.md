# 3411. Maximum Subarray With Equal Products

**Difficulty:** Easy

## Problem Statement

Given an integer array `nums`, find the maximum length of a subarray where the product of all elements is equal to the product of the subarray's GCD and LCM.

In other words:

`Product = GCD × LCM`

Return the maximum length of such a subarray.

## Approach

- Traverse all possible subarrays using two nested loops.
- For each starting index, extend the subarray one element at a time.
- Maintain the product, GCD, and LCM of the current subarray.
- Check whether the product is equal to GCD multiplied by LCM.
- If the condition is satisfied, update the maximum length.

## Complexity Analysis

- **Time Complexity:** O(n² × log M), where n is the array size and M is the maximum element.
- **Space Complexity:** O(1), as only a few variables are used.

## Key Concept

**GCD and LCM:** A subarray is valid when the product of its elements equals the product of its GCD and LCM.