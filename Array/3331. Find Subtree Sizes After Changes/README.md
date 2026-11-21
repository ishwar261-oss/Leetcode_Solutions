# 3331. Find Subtree Sizes After Changes

**Difficulty:** Medium

**Topics:** Tree, Depth-First Search (DFS), Hashing

## Problem Summary

Given a rooted tree represented by a parent array and a string containing a character for each node, modify the tree by changing the parent of each node to its closest ancestor having the same character, if such an ancestor exists.

Return an array containing the subtree size of every node in the modified tree.

## Approach: Iterative DFS + Last Seen Array

1. Build an adjacency list from the original parent array.
2. Maintain a `last` array of size 26 to track the most recently visited node for each character.
3. During DFS entry, record the previous matching ancestor and update the last-seen node.
4. During DFS exit, restore the previous ancestor and add the current subtree size to its new parent.
5. Return the final subtree sizes.

The iterative DFS processes nodes in postorder, ensuring that child subtree sizes are calculated before updating their parent.

## Complexity Analysis

- **Time Complexity:** O(n) — Each node and edge is processed once.
- **Space Complexity:** O(n) — Adjacency list, auxiliary arrays, and DFS stack.

## Key Concepts Learned

- Tree representation using adjacency lists.
- Iterative Depth-First Search.
- Tracking ancestors using a last-seen array.
- Postorder tree traversal.
- Subtree size calculation.

## LeetCode

[3331. Find Subtree Sizes After Changes](https://leetcode.com/problems/find-subtree-sizes-after-changes/)