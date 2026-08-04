<<<<<<< HEAD
=======
<<<<<<< HEAD
# 746. Min Cost Climbing Stairs

## Problem Statement

You are given an integer array `cost`, where `cost[i]` is the cost of stepping on the `iᵗʰ` stair.

You can start from either:

- Stair `0`
- Stair `1`

Each move allows you to climb either:

- 1 step
- 2 steps

Return the **minimum cost** required to reach the top.

---

## Example 1

### Input

```text
cost = [10,15,20]
```

### Output

```text
15
```

### Explanation

Start from stair `1`.

Pay `15`.

Jump two steps to the top.

Total cost = **15**

---

## Example 2

### Input

```text
cost = [1,100,1,1,1,100,1,1,100,1]
```

### Output

```text
6
```

---

## Intuition

To reach stair `i`, you can come from:

- Stair `i-1`
- Stair `i-2`

Choose the cheaper path.

Therefore,

```
dp[i] = cost[i] + min(dp[i-1], dp[i-2])
```

Since only the previous two values are needed, use two variables instead of a DP array.

---

## Approach

Store the minimum cost to reach the previous two stairs.

For each stair:

- Add its cost.
- Choose the minimum previous cost.
- Update the previous values.

At the end, the answer is the minimum cost of reaching either of the last two stairs because you can jump to the top from either one.

---

## Algorithm

1. Initialize:
   - `prev2 = cost[0]`
   - `prev1 = cost[1]`
2. Traverse from index `2` to `n-1`.
3. Calculate:
   - `curr = cost[i] + min(prev1, prev2)`
4. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
5. Return:
   - `min(prev1, prev2)`

---

## Dry Run

Input

```text
cost = [10,15,20]
```

Initial

```text
prev2 = 10
prev1 = 15
```

| Stair | Cost | Current Cost |
|------:|-----:|-------------:|
|0|10|10|
|1|15|15|
|2|20|20 + min(10,15) = 30|

Final Answer

```text
min(30,15) = 15
```

---

## Another Dry Run

Input

```text
cost = [1,100,1,1,1,100,1,1,100,1]
```

| i | Cost | Min Cost |
|---|-----:|---------:|
|0|1|1|
|1|100|100|
|2|1|2|
|3|1|3|
|4|1|3|
|5|100|103|
|6|1|4|
|7|1|5|
|8|100|104|
|9|1|6|

Answer

```text
6
```

---

## Complexity Analysis

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
- Space Optimization
- Arrays

---

## DP Relation

```
dp[i] = cost[i] + min(dp[i-1], dp[i-2])
```

---

## Tags

=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 746. Min Cost Climbing Stairs

## Problem Statement

You are given an integer array `cost`, where `cost[i]` is the cost of stepping on the `iᵗʰ` stair.

You can start from either:

- Stair `0`
- Stair `1`

Each move allows you to climb either:

- 1 step
- 2 steps

Return the **minimum cost** required to reach the top.

---

## Example 1

### Input

```text
cost = [10,15,20]
```

### Output

```text
15
```

### Explanation

Start from stair `1`.

Pay `15`.

Jump two steps to the top.

Total cost = **15**

---

## Example 2

### Input

```text
cost = [1,100,1,1,1,100,1,1,100,1]
```

### Output

```text
6
```

---

## Intuition

To reach stair `i`, you can come from:

- Stair `i-1`
- Stair `i-2`

Choose the cheaper path.

Therefore,

```
dp[i] = cost[i] + min(dp[i-1], dp[i-2])
```

Since only the previous two values are needed, use two variables instead of a DP array.

---

## Approach

Store the minimum cost to reach the previous two stairs.

For each stair:

- Add its cost.
- Choose the minimum previous cost.
- Update the previous values.

At the end, the answer is the minimum cost of reaching either of the last two stairs because you can jump to the top from either one.

---

## Algorithm

1. Initialize:
   - `prev2 = cost[0]`
   - `prev1 = cost[1]`
2. Traverse from index `2` to `n-1`.
3. Calculate:
   - `curr = cost[i] + min(prev1, prev2)`
4. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
5. Return:
   - `min(prev1, prev2)`

---

## Dry Run

Input

```text
cost = [10,15,20]
```

Initial

```text
prev2 = 10
prev1 = 15
```

| Stair | Cost | Current Cost |
|------:|-----:|-------------:|
|0|10|10|
|1|15|15|
|2|20|20 + min(10,15) = 30|

Final Answer

```text
min(30,15) = 15
```

---

## Another Dry Run

Input

```text
cost = [1,100,1,1,1,100,1,1,100,1]
```

| i | Cost | Min Cost |
|---|-----:|---------:|
|0|1|1|
|1|100|100|
|2|1|2|
|3|1|3|
|4|1|3|
|5|100|103|
|6|1|4|
|7|1|5|
|8|100|104|
|9|1|6|

Answer

```text
6
```

---

## Complexity Analysis

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
- Space Optimization
- Arrays

---

## DP Relation

```
dp[i] = cost[i] + min(dp[i-1], dp[i-2])
```

---

## Tags

<<<<<<< HEAD
`Dynamic Programming` `Array` `Space Optimized DP`
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Dynamic Programming` `Array` `Space Optimized DP`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
