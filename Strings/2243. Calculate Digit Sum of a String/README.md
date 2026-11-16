# 2243. Calculate Digit Sum of a String

**Difficulty:** Easy  
**Topic:** String, Simulation  
**Language:** C++

## Problem Description

You are given a string `s` consisting of digits and an integer `k`.

Repeatedly perform the following operation until the length of the string is less than or equal to `k`:

- Divide the string into consecutive groups of size `k`.
- Calculate the sum of digits in each group.
- Replace each group with its digit sum.

Return the final string.

## Approach: Simulation

1. Use a `while` loop until the string length becomes less than or equal to `k`.
2. Traverse the string in groups of size `k`.
3. Calculate the sum of digits in each group.
4. Convert the sum into a string using `to_string()`.
5. Append the result to a temporary string.
6. Update the original string and repeat.


## Complexity Analysis

- **Time Complexity:** O(n log n) — Each round processes the entire string, and the string length decreases by approximately a factor of `k` (for `k > 1`).
- **Space Complexity:** O(n) — A temporary string is used to store the results of each round.

## Key Learnings

- String traversal using loops.
- Converting characters into integers using `s[i] - '0'`.
- Converting integers into strings using `to_string()`.
- Simulating repeated operations on strings.

**Problem Link:** https://leetcode.com/problems/calculate-digit-sum-of-a-string/