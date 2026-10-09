# 1541. Minimum Insertions to Balance a Parentheses String

## Problem
Given a parentheses string `s` containing only `(` and `)`, find the minimum number of insertions needed to make it balanced.

**Special Rule:** Every `(` must be matched with exactly two consecutive `))`.

## Approach
Use a greedy approach with a counter to track the required closing parentheses.

- Each `(` requires two `)` characters.
- If a `(` appears, increase the required closing count by 2.
- If a `)` appears, decrease the required closing count by 1.
- If the required closing count becomes odd, insert one `)` to make it even.
- If a `)` appears when no closing parentheses are required, insert one `(` and count the current `)` as the first closing parenthesis.
- At the end, insert any remaining required closing parentheses.

## Example

Input: s = "(()))"

Output: 1

Explanation:
The string needs one additional `)` to satisfy the rule that every `(` is matched with `))`.

## Algorithm
1. Initialize `ans = 0` and `need = 0`.
2. Traverse each character in the string.
3. If the character is `(`:
   - If `need` is odd, insert one `)` and decrement `need`.
   - Increase `need` by 2.
4. Otherwise, the character is `)`:
   - Decrease `need` by 1.
   - If `need` becomes negative:
     - Insert one `(` and increase `ans`.
     - Set `need = 1`.
5. Add `need` to `ans`.
6. Return `ans`.

## Key Idea
Each opening parenthesis requires two closing parentheses. Track the number of closing parentheses needed and insert characters whenever the current string violates the required pattern.

## Complexity
- **Time:** O(n)
- **Space:** O(1)

## Concepts Used
- Greedy Algorithm
- String Traversal
- Counting