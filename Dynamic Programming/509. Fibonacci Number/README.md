<<<<<<< HEAD
# 509. Fibonacci Number

## Problem Statement

The Fibonacci sequence is defined as:

- F(0) = 0
- F(1) = 1
- F(n) = F(n-1) + F(n-2), for n > 1

Given an integer `n`, return the `n`th Fibonacci number.

---

## Example 1

### Input

```
n = 2
```

### Output

```
1
```

### Explanation

```
F(2) = F(1) + F(0)
     = 1 + 0
     = 1
```

---

## Example 2

### Input

```
n = 3
```

### Output

```
2
```

### Explanation

```
F(3) = F(2) + F(1)
     = 1 + 1
     = 2
```

---

## Example 3

### Input

```
n = 4
```

### Output

```
3
```

### Explanation

```
F(4) = F(3) + F(2)
     = 2 + 1
     = 3
```

---

## Approach

Instead of using recursion, which recalculates the same values many times, we use an iterative approach.

- Store the previous two Fibonacci numbers.
- Calculate the current Fibonacci number.
- Update the previous values.
- Continue until reaching `n`.

This uses constant extra space and runs efficiently.

---

## Algorithm

1. If `n` is 0 or 1, return `n`.
2. Initialize:
   - `prev2 = 0`
   - `prev1 = 1`
3. Loop from `2` to `n`.
4. Compute:
   - `curr = prev1 + prev2`
5. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
6. Return `prev1`.

---

## Dry Run

Input:

```
n = 5
```

| i | prev2 | prev1 | curr |
|---|-------|-------|------|
| Start | 0 | 1 | - |
| 2 | 1 | 1 | 1 |
| 3 | 1 | 2 | 2 |
| 4 | 2 | 3 | 3 |
| 5 | 3 | 5 | 5 |

Output:

```
5
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Iteration
- Variables
- Mathematics

---

## Tags

=======
# 509. Fibonacci Number

## Problem Statement

The Fibonacci sequence is defined as:

- F(0) = 0
- F(1) = 1
- F(n) = F(n-1) + F(n-2), for n > 1

Given an integer `n`, return the `n`th Fibonacci number.

---

## Example 1

### Input

```
n = 2
```

### Output

```
1
```

### Explanation

```
F(2) = F(1) + F(0)
     = 1 + 0
     = 1
```

---

## Example 2

### Input

```
n = 3
```

### Output

```
2
```

### Explanation

```
F(3) = F(2) + F(1)
     = 1 + 1
     = 2
```

---

## Example 3

### Input

```
n = 4
```

### Output

```
3
```

### Explanation

```
F(4) = F(3) + F(2)
     = 2 + 1
     = 3
```

---

## Approach

Instead of using recursion, which recalculates the same values many times, we use an iterative approach.

- Store the previous two Fibonacci numbers.
- Calculate the current Fibonacci number.
- Update the previous values.
- Continue until reaching `n`.

This uses constant extra space and runs efficiently.

---

## Algorithm

1. If `n` is 0 or 1, return `n`.
2. Initialize:
   - `prev2 = 0`
   - `prev1 = 1`
3. Loop from `2` to `n`.
4. Compute:
   - `curr = prev1 + prev2`
5. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
6. Return `prev1`.

---

## Dry Run

Input:

```
n = 5
```

| i | prev2 | prev1 | curr |
|---|-------|-------|------|
| Start | 0 | 1 | - |
| 2 | 1 | 1 | 1 |
| 3 | 1 | 2 | 2 |
| 4 | 2 | 3 | 3 |
| 5 | 3 | 5 | 5 |

Output:

```
5
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Iteration
- Variables
- Mathematics

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Dynamic Programming` `Math` `Iteration`