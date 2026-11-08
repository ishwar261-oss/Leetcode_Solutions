
# 1267. Count Servers that Communicate

**Platform:** LeetCode  
**Difficulty:** Medium  
**Topic:** Array, Matrix, Counting  
**Language:** C++

## Problem

Given an m x n grid:
- `1` represents a server.
- `0` represents an empty cell.

Two servers can communicate if they are present in the same row or column.

Return the total number of servers that can communicate with at least one other server.

## Approach: Row and Column Counting

1. Create two arrays to store the number of servers in each row and column.
2. Traverse the grid and count servers in every row and column.
3. Traverse the grid again.
4. If a cell contains a server and its row or column has more than one server, increment the answer.
5. Return the final count.


## Complexity Analysis

- **Time Complexity:** O(m × n)
- **Space Complexity:** O(m + n)

## Key Learning

- 2D Matrix Traversal
- Row and Column Counting
- Frequency Arrays
- Logical OR Condition

## Conclusion

Solved using two-pass matrix traversal and row-column frequency counting.

**LeetCode Problem:** [1267. Count Servers that Communicate](https://leetcode.com/problems/count-servers-that-communicate/)
