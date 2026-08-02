<<<<<<< HEAD
# 342. Power of Four

## Problem

Given an integer `n`, return `true` if it is a power of `4`. Otherwise, return `false`.

A number is a power of `4` if there exists an integer `x` such that:

```
n = 4^x
```

---

## Example 1

### Input

```
n = 16
```

### Output

```
true
```

---

## Example 2

### Input

```
n = 5
```

### Output

```
false
```

---

## Approach

- If `n` is less than or equal to `0`, it cannot be a power of `4`.
- Keep dividing `n` by `4` while it is divisible by `4`.
- If the final value becomes `1`, then `n` is a power of `4`; otherwise, it is not.

---

## Algorithm

1. Check if `n <= 0`.
2. While `n % 4 == 0`:
   - Divide `n` by `4`.
3. Return `true` if `n == 1`, otherwise `false`.

---

## Complexity

- **Time:** `O(log₄ n)`
- **Space:** `O(1)`

---

## Concepts Used

- Math
- Division
- Bit Manipulation

---

## Tags

=======
# 342. Power of Four

## Problem

Given an integer `n`, return `true` if it is a power of `4`. Otherwise, return `false`.

A number is a power of `4` if there exists an integer `x` such that:

```
n = 4^x
```

---

## Example 1

### Input

```
n = 16
```

### Output

```
true
```

---

## Example 2

### Input

```
n = 5
```

### Output

```
false
```

---

## Approach

- If `n` is less than or equal to `0`, it cannot be a power of `4`.
- Keep dividing `n` by `4` while it is divisible by `4`.
- If the final value becomes `1`, then `n` is a power of `4`; otherwise, it is not.

---

## Algorithm

1. Check if `n <= 0`.
2. While `n % 4 == 0`:
   - Divide `n` by `4`.
3. Return `true` if `n == 1`, otherwise `false`.

---

## Complexity

- **Time:** `O(log₄ n)`
- **Space:** `O(1)`

---

## Concepts Used

- Math
- Division
- Bit Manipulation

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Math` `Bit Manipulation`