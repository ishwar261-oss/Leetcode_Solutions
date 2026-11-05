# 1385. Find the Distance Value Between Two Arrays

## Problem

Given two integer arrays `arr1` and `arr2`, and an integer `d`, return the **distance value** between the two arrays.

An element `arr1[i]` is counted if there is **no** element `arr2[j]` such that:

```text
|arr1[i] - arr2[j]| <= d
```

In other words, for an element of `arr1` to be valid, its distance from **every** element of `arr2` must be greater than `d`.

## Example

```text
Input:
arr1 = [4,5,8]
arr2 = [10,9,1,8]
d = 2

Output:
2
```

### Explanation

For `arr1[0] = 4`:

```text
|4 - 10| = 6
|4 - 9|  = 5
|4 - 1|  = 3
|4 - 8|  = 4
```

All distances are greater than `2`, so `4` is counted.

For `arr1[1] = 5`:

```text
|5 - 10| = 5
|5 - 9|  = 4
|5 - 1|  = 4
|5 - 8|  = 3
```

All distances are greater than `2`, so `5` is counted.

For `arr1[2] = 8`:

```text
|8 - 10| = 2
```

Since `2 <= d`, `8` is not counted.

Therefore:

```text
Answer = 2
```

## Approach

### Sorting + Binary Search

First, sort `arr2`.

For every element `x` in `arr1`, we need to check whether `arr2` contains any value in this range:

```text
[x - d, x + d]
```

If such a value exists, `x` cannot be counted.

We use `lower_bound()` to find the first element in `arr2` that is greater than or equal to:

```text
x - d
```

Then:

- If this element exists and is `<= x + d`, there is a value within distance `d`.
- Otherwise, `x` is valid and we increase the answer.

## Algorithm

1. Sort `arr2`.
2. Initialize `ans = 0`.
3. For every `x` in `arr1`:
   - Find the first element in `arr2` that is `>= x - d`.
   - If it does not exist, count `x`.
   - Otherwise, if it is greater than `x + d`, count `x`.
4. Return `ans`.

## Key Idea

Instead of comparing every element of `arr1` with every element of `arr2`, sort `arr2` and use binary search to quickly check whether any value lies inside:

```text
[x - d, x + d]
```

## Complexity

Let:

```text
n = arr1.size()
m = arr2.size()
```

- Sorting `arr2`: `O(m log m)`
- Binary search for every element of `arr1`: `O(n log m)`
- Total: `O(m log m + n log m)`
- Extra Space: `O(1)` excluding the sorting implementation.

## Concepts Used

- Arrays
- Sorting
- Binary Search
- `lower_bound()`
- Absolute Difference