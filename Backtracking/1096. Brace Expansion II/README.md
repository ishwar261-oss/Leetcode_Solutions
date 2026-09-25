# 1096. Brace Expansion II

## Problem

Given an expression containing:

- lowercase letters
- `{ }`
- `,`

return all possible strings represented by the expression in **sorted order**.

There are two main operations:

1. `,` → Union
2. Adjacent expressions → Concatenation

### Example

Input:

"{a,b}{c,{d,e}}"

Output:

["ac","ad","ae","bc","bd","be"]

---

## Approach

Use **recursion + set**.

For every expression:

### 1. Find a top-level comma

If we find a comma that is not inside another `{}`:

```text
a,b