# 2089. Find Target Indices After Sorting Array

## Problem
Given an integer array `nums` and an integer `target`, sort the array in non-decreasing order and return all indices where the value equals `target`.

## Approach
1. Sort the array in ascending order.
2. Traverse the sorted array.
3. Whenever an element equals `target`, add its index to the answer.
4. Return the answer vector.

## Example

**Input:**
```text
nums = [1,2,5,2,3]
target = 2
```

**Output:**
```text
[1,2]
```

**Explanation:**

After sorting, the array becomes `[1,2,2,3,5]`. The target `2` occurs at indices `1` and `2`.

## Algorithm
1. Sort `nums`.
2. Create an empty vector `ans`.
3. Loop through every index `i`.
4. If `nums[i] == target`, append `i` to `ans`.
5. Return `ans`.

## Key Idea
Sorting places equal values together, so all indices containing the target can be collected in ascending order.

## Complexity
- **Time:** `O(n log n)` for sorting and `O(n)` for traversal.
- **Auxiliary Space:** `O(k)` for the answer vector, where `k` is the number of target occurrences, excluding sorting space.

## Concepts Used
- Arrays
- Sorting
- Linear traversal
- Vectors
