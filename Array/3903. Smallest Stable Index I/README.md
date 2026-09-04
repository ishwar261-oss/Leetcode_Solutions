# First Stable Index

## Problem

You are given an array `nums`.

Find the first index `i` such that the elements from that index onward satisfy the required stable condition defined by the problem.

Return the first stable index. If no such index exists, return `-1`.

## Approach

Traverse the array while checking the stability condition for each possible starting index.

The first index that satisfies the condition is the required answer.

## Example

Input:
nums = [...]

Output:
...

## Algorithm

1. Start from the beginning of the array.
2. Check each index as a possible stable starting position.
3. Verify whether the remaining elements satisfy the stability condition.
4. Return the first index that satisfies it.
5. If no index satisfies the condition, return `-1`.

## Key Idea

The problem asks for the **first** index satisfying a condition, so we scan from left to right and stop as soon as a valid index is found.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Linear Traversal
- Index Tracking
- Conditions