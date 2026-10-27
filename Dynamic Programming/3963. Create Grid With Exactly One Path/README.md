# 3963. Create Grid With Exactly One Path

## Problem
Given two integers `m` and `n`, construct an `m x n` grid containing only `'.'` and `'#'`.

- `'.'` represents a free cell.
- `'#'` represents an obstacle.

The grid must have exactly one valid path from the top-left cell `(0, 0)` to the bottom-right cell `(m - 1, n - 1)`.

Movement is allowed only to the right or downward.

## Approach
Use a simple construction technique.

1. Initialize the entire grid with `'#'`.
2. Make every cell in the first row `'.'`.
3. Make every cell in the last column `'.'`.
4. Return the grid.

This creates exactly one path: move right across the first row, then move down along the last column.

## Example

Input:
m = 3, n = 4

Output:
["....", "###.", "###."]

Explanation:

The unique path is:

(0,0) → (0,1) → (0,2) → (0,3)
→ (1,3) → (2,3)

All other cells are obstacles, so no alternative path exists.

## Algorithm
1. Create an `m x n` grid filled with `'#'`.
2. Replace the first row with `'.'`.
3. Iterate through every row and set the last column to `'.'`.
4. Return the grid.

## Key Idea
Keep only one simple path open and block every other cell.

The path moves right first and then down, ensuring exactly one valid route.

## Complexity Analysis
- Time Complexity: O(m × n) — Initializing the grid takes O(m × n) time.
- Space Complexity: O(m × n) — The grid requires O(m × n) space.

## Concepts Used
- Two-Dimensional Grid
- Strings
- Simulation
- Constructive Algorithms