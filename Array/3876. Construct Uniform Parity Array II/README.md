# 3876. Construct Uniform Parity Array II

## Problem

You are given an array `nums1` of `n` distinct integers.

You need to determine whether it is possible to construct another array `nums2` of the same length such that all elements of `nums2` have the same parity.

For each index `i`, you can choose:

- `nums2[i] = nums1[i]`
- `nums2[i] = nums1[i] - nums1[j]` for some `j != i`, provided the result is positive.

Return `true` if it is possible, otherwise return `false`.

## Approach

Find the minimum element in the array.

There are two cases:

1. If the minimum element is odd:
   - We can make all elements have odd parity.
   - Therefore, return `true`.

2. If the minimum element is even:
   - If there is any odd element, it cannot be made to have the required common parity.
   - Therefore, return `false`.
   - If all elements are even, return `true`.

## Example

Input:
nums1 = [1, 4, 7]

Output:
true

Explanation:

The minimum element is `1`, which is odd.

We can construct:
`[1, 3, 7]`

All elements are odd.

## Algorithm

1. Find the minimum element `mn`.
2. If `mn` is odd, return `true`.
3. Otherwise, traverse the array.
4. If any element is odd, return `false`.
5. If all elements are even, return `true`.

## Key Idea

The minimum element determines whether an odd value can be used to adjust the parity of the other elements.

So the problem can be reduced to checking:
- minimum element's parity
- whether any odd element exists

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Minimum Element
- Parity
- Linear Traversal
- Greedy / Mathematical Observation