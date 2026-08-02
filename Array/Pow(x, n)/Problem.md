```md
# Pow(x, n)

> **Problem Link:** https://leetcode.com/problems/powx-n/

## Problem Statement

Implement the function `pow(x, n)` that calculates `x` raised to the power `n`.

---

## Approach

Use **Binary Exponentiation**.

Repeatedly square the base while halving the exponent. If the exponent is odd, multiply the answer by the current base.

---

## Algorithm

1. Initialize `ans = 1`.
2. While `n > 0`:
   - If `n` is odd, multiply `ans` by `x`.
   - Square `x`.
   - Divide `n` by `2`.
3. Return the result.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time | **O(log n)** |
| Space | **O(1)** |

---

## Tags

- Arrays
- Binary Exponentiation
- Mathematics
- Divide and Conquer
```

