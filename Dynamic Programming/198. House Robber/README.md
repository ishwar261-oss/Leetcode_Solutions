<<<<<<< HEAD
=======
<<<<<<< HEAD
# House Robber (LeetCode 198)

## Problem Statement

You are given an integer array `nums` where each element represents the amount of money in a house.

You cannot rob **two adjacent houses**, because doing so will alert the police.

Return the **maximum amount of money** you can rob.

---

## Example

### Input

```text
nums = [2,7,9,3,1]
```

### Output

```text
12
```

### Explanation

Rob:

- House 1 → 2
- House 3 → 9
- House 5 → 1

Total Money:

```text
2 + 9 + 1 = 12
```

---

## Approach

At every house, there are only two choices:

### 1. Rob the Current House

If you rob the current house, you **cannot rob the previous one**.

```text
take = nums[i] + prev2
```

where `prev2` stores the maximum money collected up to house `i-2`.

---

### 2. Skip the Current House

If you skip the current house, your money remains the same as the previous maximum.

```text
skip = prev1
```

where `prev1` stores the maximum money collected up to house `i-1`.

---

Choose the better option.

```text
curr = max(take, skip)
```

Then update the previous values for the next iteration.

---

## Algorithm

1. If there is only one house, return its value.
2. Initialize:
   - `prev2 = nums[0]`
   - `prev1 = max(nums[0], nums[1])`
3. Traverse the remaining houses.
4. Compute:
   - `take = nums[i] + prev2`
   - `skip = prev1`
5. Store:
   - `curr = max(take, skip)`
6. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
7. Return `prev1`.

---

## Dry Run

Input

```text
nums = [2,7,9,3,1]
```

Initial Values

```text
prev2 = 2
prev1 = 7
```

| House | Money | Take | Skip | Current Maximum |
|------:|------:|-----:|-----:|----------------:|
|0|2|-|-|2|
|1|7|-|-|7|
|2|9|11|7|11|
|3|3|10|11|11|
|4|1|12|11|12|

Final Answer

```text
12
```

---

## Why This Works

For every house:

- **Take** the current house and add the best result from two houses back.
- **Skip** the current house and keep the best result so far.

Choose whichever gives more money.

This ensures that **no two adjacent houses are robbed**.

---

## Complexity Analysis

**Time Complexity**

```text
O(n)
```

Only one traversal of the array is required.

**Space Complexity**

```text
O(1)
```

Only three variables are used (`prev2`, `prev1`, and `curr`).

---

## Concepts Used

- Dynamic Programming
- Space Optimization
- Arrays
- Decision Making

---

## DP Relation

```text
take = nums[i] + dp[i-2]

skip = dp[i-1]

dp[i] = max(take, skip)
```

---

## Tags

=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# House Robber (LeetCode 198)

## Problem Statement

You are given an integer array `nums` where each element represents the amount of money in a house.

You cannot rob **two adjacent houses**, because doing so will alert the police.

Return the **maximum amount of money** you can rob.

---

## Example

### Input

```text
nums = [2,7,9,3,1]
```

### Output

```text
12
```

### Explanation

Rob:

- House 1 → 2
- House 3 → 9
- House 5 → 1

Total Money:

```text
2 + 9 + 1 = 12
```

---

## Approach

At every house, there are only two choices:

### 1. Rob the Current House

If you rob the current house, you **cannot rob the previous one**.

```text
take = nums[i] + prev2
```

where `prev2` stores the maximum money collected up to house `i-2`.

---

### 2. Skip the Current House

If you skip the current house, your money remains the same as the previous maximum.

```text
skip = prev1
```

where `prev1` stores the maximum money collected up to house `i-1`.

---

Choose the better option.

```text
curr = max(take, skip)
```

Then update the previous values for the next iteration.

---

## Algorithm

1. If there is only one house, return its value.
2. Initialize:
   - `prev2 = nums[0]`
   - `prev1 = max(nums[0], nums[1])`
3. Traverse the remaining houses.
4. Compute:
   - `take = nums[i] + prev2`
   - `skip = prev1`
5. Store:
   - `curr = max(take, skip)`
6. Update:
   - `prev2 = prev1`
   - `prev1 = curr`
7. Return `prev1`.

---

## Dry Run

Input

```text
nums = [2,7,9,3,1]
```

Initial Values

```text
prev2 = 2
prev1 = 7
```

| House | Money | Take | Skip | Current Maximum |
|------:|------:|-----:|-----:|----------------:|
|0|2|-|-|2|
|1|7|-|-|7|
|2|9|11|7|11|
|3|3|10|11|11|
|4|1|12|11|12|

Final Answer

```text
12
```

---

## Why This Works

For every house:

- **Take** the current house and add the best result from two houses back.
- **Skip** the current house and keep the best result so far.

Choose whichever gives more money.

This ensures that **no two adjacent houses are robbed**.

---

## Complexity Analysis

**Time Complexity**

```text
O(n)
```

Only one traversal of the array is required.

**Space Complexity**

```text
O(1)
```

Only three variables are used (`prev2`, `prev1`, and `curr`).

---

## Concepts Used

- Dynamic Programming
- Space Optimization
- Arrays
- Decision Making

---

## DP Relation

```text
take = nums[i] + dp[i-2]

skip = dp[i-1]

dp[i] = max(take, skip)
```

---

## Tags

<<<<<<< HEAD
`Dynamic Programming` `Array` `Space Optimized DP` `1D DP`
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Dynamic Programming` `Array` `Space Optimized DP` `1D DP`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
