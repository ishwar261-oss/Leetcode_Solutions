# 3348. Smallest Divisible Digit Product II

## Problem

Given a string `num` representing a positive integer and an integer `t`, return the **smallest zero-free number** greater than or equal to `num` such that the **product of its digits** is divisible by `t`.

A **zero-free** number contains no digit `0`.

If no such number exists, return `"-1"`.

---

## Approach

This solution uses a combination of **Greedy**, **GCD**, and **Mathematical Construction**.

### Key Idea

- Check whether `t` can be completely factorized using digits `2` to `9`.
- If not, return `"-1"` because no valid number exists.
- Compute the remaining divisor after every prefix of `num`.
- If `num` already satisfies the condition, return it.
- Starting from the right, try increasing one digit.
- After changing a digit, greedily construct the smallest possible suffix that satisfies the divisibility requirement.
- If no solution exists with the same length, construct the smallest valid number with one extra digit.

---

## Algorithm

1. Read `num` and `t`.
2. Verify that `t` can be factorized using digits `2` to `9`.
3. If not possible, return `"-1"`.
4. Compute the remaining divisor after every prefix using `gcd()`.
5. If the original number is already valid, return it.
6. Traverse from right to left:
   - Increase the current digit.
   - Update the remaining divisor.
   - Fill the remaining positions greedily.
   - If successful, return the constructed number.
7. If no answer exists with the current length, construct the smallest valid longer number.
8. Return the answer.

---

## Example 1

### Input

```text
num = "1234"
t = 256
```

### Output

```text
1488
```

### Explanation

```
1 × 4 × 8 × 8 = 256
```

The product of the digits is divisible by `256`.

---

## Example 2

### Input

```text
num = "12355"
t = 50
```

### Output

```text
12355
```

### Explanation

```
1 × 2 × 3 × 5 × 5 = 150
```

Since `150` is divisible by `50`, the original number is already valid.

---

## Example 3

### Input

```text
num = "11111"
t = 26
```

### Output

```text
-1
```

### Explanation

The prime factor `13` cannot be formed using any digit from `1` to `9`, so no valid zero-free number exists.

---

## Complexity

- **Time Complexity:** `O(n + log t)`
- **Space Complexity:** `O(n)`

where `n` is the length of the string.

---

## Concepts Used

- Greedy Algorithm
- Number Theory
- Greatest Common Divisor (GCD)
- String Manipulation
- Mathematical Construction

---

## Tags

`Greedy` `Math` `Number Theory` `String`