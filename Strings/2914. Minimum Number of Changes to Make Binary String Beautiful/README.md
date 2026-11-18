# LeetCode 2914 – Minimum Number of Changes to Make Binary String Beautiful

**Difficulty:** Medium  
**Topics:** String, Greedy

## Problem Statement

Given a binary string `s`, find the minimum number of character changes required to make the string beautiful.

A binary string is beautiful if it can be divided into substrings of length 2, where every substring contains identical characters (`00` or `11`).

## Approach: Greedy

The main idea is to divide the string into consecutive pairs.

For each pair:
- If both characters are equal, no changes are required.
- If both characters are different, one character must be changed.

Count all pairs containing different characters to get the minimum number of changes.

## Example

**Input:**
`"1001"`

**Output:**
`2`

**Explanation:**

The string contains two pairs: `10` and `01`.

Both pairs contain different characters, so one change is required for each pair.

## Complexity Analysis

- **Time Complexity:** O(n) – Each pair is checked exactly once.
- **Space Complexity:** O(1) – Only a counter variable is used.

## Key Learnings

- String traversal using increments of 2.
- Greedy problem-solving approach.
- Identifying minimum changes by processing independent pairs.

**Pattern:** Greedy + String.