# 3736. Minimum Moves to Equal Array Elements III

## Problem
Given an integer array nums, one move allows you to increase any
single element by 1.

Return the minimum number of moves required to make all elements equal.

## Approach
Find the maximum element in the array.

Since we can only increase elements, the maximum element is the
smallest possible target value.

For each element, calculate the difference between the maximum
element and the current element. Add all differences to get
the minimum number of moves.

## Example

Input: nums = [2, 1, 3]

Output: 3

Explanation:
Maximum element = 3

Element 2 requires 3 - 2 = 1 move.
Element 1 requires 3 - 1 = 2 moves.
Element 3 requires 3 - 3 = 0 moves.

Total moves = 1 + 2 + 0 = 3.

## Algorithm
1. Find the maximum element in nums.
2. Initialize moves = 0.
3. Traverse the array.
4. Add maximum - current element to moves.
5. Return moves.

## Key Idea
The final target must be the maximum element because we can only
increase values, not decrease them.

Minimum moves = Sum of (maximum element - current element).

## Time Complexity
O(n), where n is the number of elements.

## Space Complexity
O(1), because only a few variables are used.

## Concepts Used
- Arrays
- Maximum Element
- Linear Traversal
- Greedy Approach
- Basic Mathematics