# 856. Score of Parentheses

**Difficulty:** Medium  
**Platform:** LeetCode

## Problem

Given a balanced parentheses string `s`, calculate its score.

Rules:

- `()` has a score of `1`.
- `AB` has a score of `A + B`, where `A` and `B` are balanced parentheses strings.
- `(A)` has a score of `2 * A`.

### Example

```text
Input:  s = "()"
Output: 1
Input:  s = "(())"
Output: 2
Input:  s = "()()"
Output: 2
Input:  s = "(()(()))"
Output: 6
Approach

Use a stack.

The stack stores the score of each currently open pair of parentheses.

When we see (, push 0 onto the stack.
When we see ):
Pop the score inside the current pair.
If the inside score is 0, it means we found (), so its score is 1.
Otherwise, its score is 2 * inside.
Add this score to the parenthesis level below it.

At the end, the bottom of the stack contains the final answer.

Algorithm
Create a stack and push 0.
Traverse the string character by character.
If the character is (:
Push 0.
If the character is ):
Pop the top value as inside.
Calculate:
1 if inside == 0
2 * inside otherwise
Add this value to the new top of the stack.
Return stack.top().
Dry Run

For:

s = "(()())"
Character	Stack
Start	[0]
(	[0, 0]
(	[0, 0, 0]
)	[0, 1]
(	[0, 1, 0]
)	[0, 2]
)	[4]

Answer:

4