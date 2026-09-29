# 2267. Check if There Is a Valid Parentheses String Path

## Problem

You are given an `m x n` grid containing either `'('` or `')'`.

Start at the top-left cell and move only:

- Right
- Down

You must reach the bottom-right cell.

The characters along the path form a parentheses string.

Return `true` if there exists a path whose parentheses string is **valid**, otherwise return `false`.

A valid parentheses string must:

1. Never have more `)` than `(` at any point.
2. Have the same number of `(` and `)` at the end.

### Example

Input:

```text
grid = [
    ["(", "(", "("],
    [")", "(", ")"],
    ["(", "(", ")"]
]