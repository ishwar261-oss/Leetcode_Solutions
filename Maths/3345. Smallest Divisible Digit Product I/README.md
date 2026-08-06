# 3345. Smallest Divisible Digit Product I

## Problem

Given two integers `n` and `t`, find the smallest integer greater than or equal to `n` such that the product of its digits is divisible by `t`.

Return that integer.

---

## Approach

- Start from `n`.
- Compute the product of its digits.
- If the product is divisible by `t`, return the current number.
- Otherwise, increment the number and repeat.

---

## Algorithm

1. Start with `n`.
2. Compute the product of all digits of the current number.
3. If `product % t == 0`, return the number.
4. Otherwise, increment the number.
5. Repeat until a valid number is found.

---

## Example

### Input

```
n = 10
t = 2
```

### Output

```
10
```

### Explanation

- Product of digits of `10` = `1 × 0 = 0`
- `0` is divisible by `2`, so the answer is `10`.

---

## Complexity

- **Time Complexity:** `O(k × d)`

Where:
- `k` = numbers checked
- `d` = number of digits

- **Space Complexity:** `O(1)`

---

## Concepts Used

- Math
- Brute Force
- Digit Manipulation

---

## Tags

`Math` `Brute Force`