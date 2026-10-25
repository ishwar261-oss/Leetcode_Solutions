# 1254. Number of Closed Islands

**Platform:** LeetCode  
**Difficulty:** Medium  
**Topic:** Graphs, DFS, Matrix

## Problem
Given a grid containing `0`s and `1`s:
- `0` represents land.
- `1` represents water.

A closed island is a group of connected land cells completely surrounded by water. Land connected to any boundary of the grid cannot be a closed island.

Return the number of closed islands.

## Approach
1. Traverse the boundary of the grid.
2. Use DFS to mark all land connected to the boundary as visited by changing `0` to `1`.
3. Traverse the remaining inner cells.
4. Whenever an unvisited land cell (`0`) is found:
   - Increment the island count.
   - Use DFS to mark the entire connected island as visited.
5. Return the count.

## Example

**Input:**
```text
grid = [
  [1,1,1,1,1,1,1,0],
  [1,0,0,0,0,1,1,0],
  [1,0,1,0,1,1,1,0],
  [1,0,0,0,0,1,0,1],
  [1,1,1,1,1,1,1,0]
]
```

**Output:**
```text
2
```

## Algorithm
1. Visit every row's first and last columns.
2. Visit every column's first and last rows.
3. Apply DFS to eliminate all boundary-connected land.
4. Iterate through the inner grid.
5. If `grid[i][j] == 0`, count one closed island and explore it using DFS.
6. Return the count.

## Key Idea
First eliminate every island connected to the boundary. All remaining connected land groups are closed islands.

## Complexity Analysis
- **Time Complexity:** `O(m × n)` — each cell is visited a constant number of times.
- **Auxiliary Space Complexity:** `O(m × n)` in the worst case due to the recursive DFS call stack.

Here, `m` is the number of rows and `n` is the number of columns.

## Concepts Used
- Depth-First Search (DFS)
- Graph Traversal
- Two-Dimensional Arrays
- Boundary Traversal