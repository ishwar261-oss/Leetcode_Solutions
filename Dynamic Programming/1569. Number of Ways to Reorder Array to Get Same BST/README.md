
# 1569. Number of Ways to Reorder Array to Get Same BST

## Problem
Given an array `nums` containing distinct integers, calculate the number of reorderings that produce the same Binary Search Tree (BST) as the original array.

Return the answer modulo `10^9 + 7`.

The original ordering must not be counted.

## Approach
1. The first element always becomes the root.
2. Divide the remaining elements into:
   - Left subtree: elements smaller than the root.
   - Right subtree: elements greater than the root.
3. Recursively calculate the number of valid reorderings for both subtrees.
4. Interleave the left and right subtree elements while preserving their relative orders.
5. The number of ways to interleave them is:
   `C(leftSize + rightSize, leftSize)`
6. Multiply the interleaving count by the answers for both subtrees.
7. Subtract 1 to exclude the original ordering.

## Algorithm
1. Precompute binomial coefficients using Pascal's Triangle.
2. Implement a recursive function `solve(nums)`.
3. Return 1 if the array has at most two elements.
4. Choose the first element as the root.
5. Partition the remaining elements into left and right arrays.
6. Recursively solve both arrays.
7. Multiply both results by the binomial coefficient.
8. Return the final answer minus 1 modulo `10^9 + 7`.

## Example
Input:
nums = [3, 4, 5, 1, 2]

Output:
5

## Key Idea
The relative order of elements within each subtree must remain unchanged, but left and right subtree elements can be interleaved.

The number of valid interleavings is:
`C(L + R, L)`

where L and R are the sizes of the left and right subtrees.

## Complexity
Let n be the array length.

- Time: O(n^2) in the worst case.
- Space: O(n^2) for binomial coefficients, plus recursion and subtree storage.

## Concepts
- Binary Search Tree
- Recursion
- Divide and Conquer
- Combinatorics
- Pascal's Triangle
- Modular Arithmetic
