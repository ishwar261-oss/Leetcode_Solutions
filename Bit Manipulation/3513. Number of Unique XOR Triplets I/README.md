<<<<<<< HEAD
# 3513. Number of Unique XOR Triplets I

## Problem

Given a permutation of integers from `1` to `n`, return the number of distinct XOR values that can be obtained by choosing any triplet.

---

## Approach

- If `n < 3`, every number itself is the only possible result, so return `n`.
- Otherwise, find the smallest power of `2` greater than `n`.
- That value is the number of distinct XOR triplets.

---

## Algorithm

1. Find the size `n`.
2. If `n < 3`, return `n`.
3. Find the next power of `2` greater than `n`.
4. Return it.

---

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Math
- Bit Manipulation
- Powers of Two

---

## Tags

=======
# 3513. Number of Unique XOR Triplets I

## Problem

Given a permutation of integers from `1` to `n`, return the number of distinct XOR values that can be obtained by choosing any triplet.

---

## Approach

- If `n < 3`, every number itself is the only possible result, so return `n`.
- Otherwise, find the smallest power of `2` greater than `n`.
- That value is the number of distinct XOR triplets.

---

## Algorithm

1. Find the size `n`.
2. If `n < 3`, return `n`.
3. Find the next power of `2` greater than `n`.
4. Return it.

---

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Math
- Bit Manipulation
- Powers of Two

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Array` `Math` `Bit Manipulation`