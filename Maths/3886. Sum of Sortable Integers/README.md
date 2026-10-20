
# 3886. Sum of Sortable Integers

## Problem
Given an integer array `nums`, find all positive integers `k` that divide the array length and allow the array to be sorted by cyclically rotating each consecutive block of length `k`.

Return the sum of all such valid values of `k`.

## Approach
- Find the prefix maximum for every position.
- Find the suffix minimum for every position.
- Count adjacent descents using a prefix array.
- Enumerate all divisors of `n`.
- Check whether every block of length `k` can be rotated into a globally sorted arrangement.
- Add each valid `k` to the answer.

## Algorithm
1. Calculate prefix maximums.
2. Calculate suffix minimums.
3. Precompute the number of adjacent descents.
4. Find divisors of `n` by iterating up to `sqrt(n)`.
5. For each divisor, check every block:
   - It must contain at most one circular descent.
   - The maximum of the previous blocks must not exceed the minimum of the remaining elements.
6. Add the divisor if all blocks pass.
7. Return the sum.

## Example

Input: `nums = [3, 1, 2]`

Possible divisors: `1, 3`

- `k = 1`: Invalid.
- `k = 3`: Valid because `[3, 1, 2]` can be rotated into `[1, 2, 3]`.

Output: `3`

## Key Idea
A block can be cyclically rotated into sorted order when it has at most one strict circular descent. Prefix maximums and suffix minimums help verify that the blocks can join in non-decreasing order.

## Complexity
- Time: `O(n + d * n / k)` across divisor checks; more precisely, `O(n * number_of_divisors(n))` in the worst case.
- Space: `O(n)`.

## Concepts
- Arrays
- Sorting
- Prefix Maximum
- Suffix Minimum
- Prefix Sum
- Divisors
- Cyclic Rotation
