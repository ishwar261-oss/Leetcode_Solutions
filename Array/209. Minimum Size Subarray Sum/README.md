<<<<<<< HEAD
# 209. Minimum Size Subarray Sum

## Problem

Given an array of positive integers `nums` and a positive integer `target`, return the **minimum length** of a contiguous subarray whose sum is **greater than or equal to** `target`.

If there is no such subarray, return `0`.

---

## Example 1

**Input**

```
target = 7
nums = [2,3,1,2,4,3]
```

**Output**

```
2
```

**Explanation**

The subarray `[4,3]` has a sum of `7`, so the minimum length is **2**.

---

## Example 2

**Input**

```
target = 4
nums = [1,4,4]
```

**Output**

```
1
```

---

## Approach

Since all numbers are **positive**, we can use the **Sliding Window** technique.

- Expand the window by moving the `right` pointer.
- Add the current element to the window sum.
- Whenever the sum becomes **greater than or equal to** the target:
  - Update the minimum length.
  - Shrink the window from the left to find an even smaller valid subarray.
- Continue until the end of the array.

---

## Algorithm

1. Initialize:
   - `left = 0`
   - `sum = 0`
   - `answer = INT_MAX`
2. Traverse the array using the `right` pointer.
3. Add `nums[right]` to `sum`.
4. While `sum >= target`:
   - Update the minimum length.
   - Remove `nums[left]` from `sum`.
   - Move `left` forward.
5. If no valid subarray exists, return `0`.
6. Otherwise, return the minimum length.


## Dry Run

### Input

```
target = 7

nums = [2,3,1,2,4,3]
```

| Left | Right | Sum | Action | Minimum Length |
|------|-------|-----|--------|----------------|
|0|0|2|Expand|∞|
|0|1|5|Expand|∞|
|0|2|6|Expand|∞|
|0|3|8|Shrink|4|
|1|3|6|Expand|4|
|1|4|10|Shrink|4|
|2|4|7|Shrink|3|
|3|4|6|Expand|3|
|3|5|9|Shrink|3|
|4|5|7|Shrink|2|

Final Answer

```
2
```

---

## Complexity

**Time**

```
O(n)
```

**Space**

```
O(1)
```

---

## Concepts Used

- Array
- Sliding Window
- Two Pointers

---

## Tags

=======
# 209. Minimum Size Subarray Sum

## Problem

Given an array of positive integers `nums` and a positive integer `target`, return the **minimum length** of a contiguous subarray whose sum is **greater than or equal to** `target`.

If there is no such subarray, return `0`.

---

## Example 1

**Input**

```
target = 7
nums = [2,3,1,2,4,3]
```

**Output**

```
2
```

**Explanation**

The subarray `[4,3]` has a sum of `7`, so the minimum length is **2**.

---

## Example 2

**Input**

```
target = 4
nums = [1,4,4]
```

**Output**

```
1
```

---

## Approach

Since all numbers are **positive**, we can use the **Sliding Window** technique.

- Expand the window by moving the `right` pointer.
- Add the current element to the window sum.
- Whenever the sum becomes **greater than or equal to** the target:
  - Update the minimum length.
  - Shrink the window from the left to find an even smaller valid subarray.
- Continue until the end of the array.

---

## Algorithm

1. Initialize:
   - `left = 0`
   - `sum = 0`
   - `answer = INT_MAX`
2. Traverse the array using the `right` pointer.
3. Add `nums[right]` to `sum`.
4. While `sum >= target`:
   - Update the minimum length.
   - Remove `nums[left]` from `sum`.
   - Move `left` forward.
5. If no valid subarray exists, return `0`.
6. Otherwise, return the minimum length.


## Dry Run

### Input

```
target = 7

nums = [2,3,1,2,4,3]
```

| Left | Right | Sum | Action | Minimum Length |
|------|-------|-----|--------|----------------|
|0|0|2|Expand|∞|
|0|1|5|Expand|∞|
|0|2|6|Expand|∞|
|0|3|8|Shrink|4|
|1|3|6|Expand|4|
|1|4|10|Shrink|4|
|2|4|7|Shrink|3|
|3|4|6|Expand|3|
|3|5|9|Shrink|3|
|4|5|7|Shrink|2|

Final Answer

```
2
```

---

## Complexity

**Time**

```
O(n)
```

**Space**

```
O(1)
```

---

## Concepts Used

- Array
- Sliding Window
- Two Pointers

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Array` `Sliding Window` `Two Pointers`