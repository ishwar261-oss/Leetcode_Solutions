# 3619. Count Islands With Total Value Divisible by K

## Problem
Given an m x n grid and an integer k, count the islands whose
total cell value is divisible by k.

An island consists of connected non-zero cells.
Cells are connected horizontally or vertically, not diagonally.

## Approach
Use Breadth-First Search (BFS) to explore each island.

1. Traverse every cell in the grid.
2. Skip cells that are zero or already visited.
3. When an unvisited non-zero cell is found, start BFS.
4. Visit all horizontally and vertically connected non-zero cells.
5. Calculate the sum of all cell values in that island.
6. If the sum is divisible by k, increment the answer.
7. Return the total count.

## Example

Input:
grid = [[0,2,1,0,0],
        [0,1,0,1,1],
        [1,1,0,1,0]]
k = 2

Output:
2

Explanation:
There are three islands.

- Island 1 has values 2, 1, 1, 1, 1.
  Sum = 6, which is divisible by 2.
- Island 2 has values 1, 1, 1.
  Sum = 3, which is not divisible by 2.
- Island 3 has values 1, 1.
  Sum = 2, which is divisible by 2.

Therefore, the answer is 2.

## Algorithm
1. Initialize the answer to zero.
2. Create a visited matrix.
3. Traverse every cell.
4. For each unvisited non-zero cell:
   - Initialize a queue and island sum.
   - Perform BFS to visit the entire island.
   - Add every visited cell's value to the sum.
   - If sum % k == 0, increment the answer.
5. Return the answer.

## Key Idea
Each island must be processed exactly once.
BFS finds all connected non-zero cells, allowing us to calculate
the total value of each island independently.

## Complexity Analysis
- Time Complexity: O(m * n)
  Each cell is visited at most once.

- Auxiliary Space: O(m * n)
  The visited matrix and BFS queue can require space proportional
  to the number of cells.

## Concepts Used
- Two-Dimensional Arrays
- Graph Traversal
- Breadth-First Search (BFS)
- Queue
- Connected Components
- Matrix Traversal
- Modulo Operator