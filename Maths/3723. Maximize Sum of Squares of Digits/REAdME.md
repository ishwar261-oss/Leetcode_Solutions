
# LeetCode 3723: Maximize Sum of Squares of Digits

## Problem
Given two integers `num` and `sum`, construct a number with exactly `num` digits whose digits add up to `sum`.

Maximize the sum of the squares of its digits. If multiple answers have the same maximum score, return the largest number. If impossible, return an empty string.

## Example
Input: num = 2, sum = 17

Output: "98"

Explanation:
9 + 8 = 17

Score = 9² + 8² = 145

## Approach: Greedy

### Key Idea
Larger digits produce a greater sum of squares. Therefore, place as many 9s as possible from left to right, then use the remaining sum as the next digit and fill the remaining positions with zeros.

### Algorithm
1. If sum > num * 9, return an empty string.
2. Create an empty answer string.
3. Repeat num times:
   - Choose digit = min(9, sum).
   - Append the digit to the answer.
   - Subtract the digit from sum.
4. Return the answer.

## Complexity
- Time: O(num)
- Auxiliary Space: O(1), excluding the output string.

## Key Takeaway
Greedy digit selection maximizes the sum of squared digits. Filling the largest digits first also ensures the largest possible number among optimal answers.
