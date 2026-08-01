<<<<<<< HEAD
# 70. Climbing Stairs

## Problem Statement

You are climbing a staircase.

It takes `n` steps to reach the top.

Each time you can climb either:

- 1 step
- 2 steps

Return the total number of distinct ways to reach the top.

---

## Example 1

Input

```
n = 2
```

Output

```
2
```

Explanation

```
1 + 1

2
```

---

## Example 2

Input

```
n = 3
```

Output

```
3
```

Explanation

```
1 + 1 + 1

1 + 2

2 + 1
```

---

## Intuition

To reach the current step:

- You can come from the previous step.
- Or you can come from two steps before.

Therefore,

```
dp[i] = dp[i-1] + dp[i-2]
```

This is the Fibonacci recurrence.

---

## Algorithm

1. If `n <= 2`, return `n`.
2. Store the number of ways for the previous two steps.
3. Iterate from step `3` to `n`.
4. Calculate the current number of ways.
5. Update the previous values.
6. Return the result.

---

## Dry Run

For

```
n = 5
```

| Step | Ways |
|------|------|
|1|1|
|2|2|
|3|3|
|4|5|
|5|8|

Answer

```
8
```

---

## Complexity

**Time Complexity**

```
O(n)
```

**Space Complexity**

```
O(1)
```

---

## Concepts Used

- Dynamic Programming
- Fibonacci Pattern
- Iteration

---

## Tags

=======
# 70. Climbing Stairs

## Problem Statement

You are climbing a staircase.

It takes `n` steps to reach the top.

Each time you can climb either:

- 1 step
- 2 steps

Return the total number of distinct ways to reach the top.

---

## Example 1

Input

```
n = 2
```

Output

```
2
```

Explanation

```
1 + 1

2
```

---

## Example 2

Input

```
n = 3
```

Output

```
3
```

Explanation

```
1 + 1 + 1

1 + 2

2 + 1
```

---

## Intuition

To reach the current step:

- You can come from the previous step.
- Or you can come from two steps before.

Therefore,

```
dp[i] = dp[i-1] + dp[i-2]
```

This is the Fibonacci recurrence.

---

## Algorithm

1. If `n <= 2`, return `n`.
2. Store the number of ways for the previous two steps.
3. Iterate from step `3` to `n`.
4. Calculate the current number of ways.
5. Update the previous values.
6. Return the result.

---

## Dry Run

For

```
n = 5
```

| Step | Ways |
|------|------|
|1|1|
|2|2|
|3|3|
|4|5|
|5|8|

Answer

```
8
```

---

## Complexity

**Time Complexity**

```
O(n)
```

**Space Complexity**

```
O(1)
```

---

## Concepts Used

- Dynamic Programming
- Fibonacci Pattern
- Iteration

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Dynamic Programming` `Math` `Fibonacci`