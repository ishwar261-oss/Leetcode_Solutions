<<<<<<< HEAD
# 191. Number of 1 Bits

## Problem Statement

Given a positive integer, return the number of bits set to `1`.

---

## Example

Input

```
11
```

Binary

```
1011
```

Output

```
3
```

---

## Approach

Check the last bit.

If it is `1`, increase the count.

Shift the number right until it becomes zero.

---

## Optimized Approach

Use

```
n = n & (n - 1)
```

This removes one set bit in every iteration.

---

## Algorithm

1. Initialize `count = 0`.
2. While `n > 0`:
   - Remove the rightmost set bit.
   - Increment `count`.
3. Return `count`.

---

## Complexity

Method 1

```
Time : O(32)
Space: O(1)
```

Method 2

```
Time : O(number of set bits)
Space: O(1)
```

---

## Concepts Used

- Bit Manipulation
- AND
- Right Shift
- Brian Kernighan Algorithm

---

## Tags

=======
# 191. Number of 1 Bits

## Problem Statement

Given a positive integer, return the number of bits set to `1`.

---

## Example

Input

```
11
```

Binary

```
1011
```

Output

```
3
```

---

## Approach

Check the last bit.

If it is `1`, increase the count.

Shift the number right until it becomes zero.

---

## Optimized Approach

Use

```
n = n & (n - 1)
```

This removes one set bit in every iteration.

---

## Algorithm

1. Initialize `count = 0`.
2. While `n > 0`:
   - Remove the rightmost set bit.
   - Increment `count`.
3. Return `count`.

---

## Complexity

Method 1

```
Time : O(32)
Space: O(1)
```

Method 2

```
Time : O(number of set bits)
Space: O(1)
```

---

## Concepts Used

- Bit Manipulation
- AND
- Right Shift
- Brian Kernighan Algorithm

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Bit Manipulation`