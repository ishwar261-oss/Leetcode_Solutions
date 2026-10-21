# 3863. Minimum Operations to Sort a String

**Platform:** LeetCode  
**Difficulty:** Medium  
**Language:** C++

## Problem

Given a string `s` containing lowercase English letters, sort it in ascending alphabetical order.

In one operation, select any substring except the entire string and sort that substring.

Return the minimum number of operations required. Return `-1` if sorting is impossible.

## Approach: Greedy / Case Analysis

Instead of trying every possible substring, use the minimum and maximum characters to determine the answer.

### Algorithm

1. Check whether the string is already sorted. If yes, return `0`.
2. If its length is `2` and it is not sorted, return `-1`.
3. Find the minimum and maximum characters.
4. If the first character is the minimum, or the last character is the maximum, return `1`.
5. If the minimum or maximum appears at an interior position, return `2`.
6. Otherwise, return `3`.

## Example

Input: `s = "card"`

Output: `2`

Operation 1: Sort `"car"` to get `"acr"`.

String becomes: `"acrd"`

Operation 2: Sort `"rd"` to get `"dr"`.

Final string: `"acdr"`

## Complexity

- **Time:** `O(n)`
- **Auxiliary Space:** `O(1)`

## Key Concepts

- Strings
- Greedy approach
- Character comparison
- Minimum and maximum elements
- Case analysis