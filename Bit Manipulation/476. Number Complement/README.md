# 476. Number Complement

## Problem

Given a positive integer `num`, return its complement by flipping all bits in its binary representation.

Only flip the bits up to the most significant `1`.

---

## Example

### Input

```
num = 5
```

### Output

```
2
```

### Explanation

```
5  = 101
111 (mask)
-----------
010 = 2
```

---

## Approach

- Build a mask containing all `1`s up to the highest set bit.
- XOR the mask with the number.
- XOR flips every bit:
  - `1 ^ 1 = 0`
  - `0 ^ 1 = 1`

---

## Algorithm

1. Create `mask = 1`.
2. Left shift until `mask > num`.
3. Subtract `1` from the mask.
4. Return `num ^ mask`.

---

## Complexity

- **Time:** `O(log n)`
- **Space:** `O(1)`

---

## Concepts Used

- Bit Manipulation
- XOR
- Left Shift
- Bit Mask

---

## Tags

`Bit Manipulation` `Math`
