# 3471. Find the Largest Almost Missing Integer

## Problem

Given an integer array `nums` and an integer `k`, find the **largest almost missing integer**.

An integer is called **almost missing** if it appears in exactly **one** subarray of length `k`.

Return the largest such integer.

If no such integer exists, return `-1`.

## Example

```text
Input:
nums = [3, 4, 2, 3]
k = 2

Output:
4
```

The subarrays of length `2` are:

```text
[3, 4]
[4, 2]
[2, 3]
```

`4` appears in exactly one of these subarrays.

Therefore:

```text
Answer = 4
```

## Approach

Generate every possible subarray of length `k`.

For every number, count how many different length-`k` subarrays contain it.

If a number occurs in exactly one such subarray, it is an **almost missing integer**.

Among all valid integers, choose the largest one.

## Algorithm

1. Consider every possible value.
2. Generate every subarray of length `k`.
3. Check whether the current value exists in that subarray.
4. If it exists, increase its subarray count.
5. After checking all subarrays:
   - If a value occurs in exactly one subarray, it is valid.
6. Keep the largest valid value.
7. Return the answer.

## Important Point

We count **subarrays containing the value**, not the total number of occurrences.

For example:

```text
[2, 2, 3]
```

If a length-2 subarray contains two `2`s, it still counts as:

```text
one subarray
```

not two.

## Complexity

With the direct approach:

```text
Time Complexity: O(V × n × k)
```

where `V` is the range of possible values.

```text
Space Complexity: O(1)
```

## Key Idea

```text
Generate every k-length subarray
          ↓
Check which values appear in it
          ↓
Count subarrays for each value
          ↓
Count == 1
          ↓
Almost Missing Integer
          ↓
Take the largest
```

## Concepts Used

- Array
- Subarray
- Sliding Window
- Nested Loops
- Frequency Counting