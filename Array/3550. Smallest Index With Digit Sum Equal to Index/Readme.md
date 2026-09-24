# 3550. Smallest Index With Digit Sum Equal to Index

## Problem

You are given an array `nums`.

Find the **smallest index `i`** such that the **sum of digits of `nums[i]`** is equal to `i`.

If no such index exists, return `-1`.

---

## Example

### Input

nums = [1, 2, 3, 4, 5, 6]

### Check

- index `0` → digit sum of `1` = `1` → ❌
- index `1` → digit sum of `2` = `2` → ❌
- index `2` → digit sum of `3` = `3` → ❌
- index `3` → digit sum of `4` = `4` → ❌
- index `4` → digit sum of `5` = `5` → ❌
- index `5` → digit sum of `6` = `6` → ❌

Answer = `-1`

---

## Approach

Traverse the array from left to right.

For every index `i`:

1. Take `nums[i]`.
2. Calculate the sum of its digits.
3. Compare the digit sum with `i`.
4. If they are equal, return `i`.
5. If the loop finishes without finding a match, return `-1`.

---

## Algorithm

1. Start from index `0`.
2. For each index `i`:
   - Set `n = nums[i]`.
   - Calculate its digit sum using:
     - `n % 10` → gets the last digit.
     - `n / 10` → removes the last digit.
   - Check whether `digitSum == i`.
3. Return the first matching index.
4. Otherwise return `-1`.

---

## Key Idea

The important part is calculating the digit sum.

For example:

`nums[i] = 123`

```text
123 % 10 → 3
123 / 10 → 12

12 % 10 → 2
12 / 10 → 1

1 % 10 → 1
1 / 10 → 0

Digit Sum = 3 + 2 + 1 = 6