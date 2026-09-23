# 1658. Minimum Operations to Reduce X to Zero

## Problem
You are given an integer array `nums` and an integer `x`.

In one operation, you can remove an element from either:
- the left side, or
- the right side.

The removed element is subtracted from `x`.

Return the **minimum number of operations** required to make `x = 0`.

If it is impossible, return `-1`.

---

## Approach

Instead of thinking about which elements to remove, think about which elements we can **keep**.

Suppose:

`sum(nums) = total`

If the removed elements sum to `x`, then the elements we keep must have:

`total - x`

So the problem becomes:

> Find the **longest subarray** whose sum is `total - x`.

Then:

`answer = n - longest_subarray_length`

Because all removed elements are from the two ends, the elements left behind must form one continuous subarray.

---

## Example

### Input
`nums = [1,1,4,2,3]`
`x = 5`

Total:

`1 + 1 + 4 + 2 + 3 = 11`

Target subarray sum:

`11 - 5 = 6`

Longest subarray with sum `6`:

`[1, 4, 2]`

Length = `3`

Array length = `5`

Therefore:

`5 - 3 = 2`

### Output
`2`

We remove:

`3` from the right  
`2` from the right

Remaining:

`[1,1,4]`

---

## Algorithm

1. Calculate the total sum of the array.
2. Calculate:
   `target = total - x`
3. If `target < 0`, return `-1`.
4. Find the longest continuous subarray having sum `target`.
5. Use a sliding window because all numbers are positive.
6. If no such subarray exists, return `-1`.
7. Otherwise return:
   `n - longest_length`

---

## Key Idea

Instead of finding the **minimum elements to remove**,

find the **maximum elements to keep**.

`minimum removals = n - maximum elements kept`

---

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Concepts Used

- Array
- Sliding Window
- Subarray
- Prefix/Total Sum
- Two Pointers