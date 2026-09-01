# 3568. Minimum Moves to Clean the Classroom

## Problem

You are given a classroom represented by a grid.

The grid contains:
- `S` → Starting position of the student.
- `L` → Litter that must be collected.
- `.` → Empty cell.
- `X` → Obstacle.

The student can move up, down, left, or right.

The student has a limited amount of energy. Moving to an adjacent cell uses one unit of energy.

There may also be cells that restore energy.

Find the minimum number of moves required to collect all the litter.

If it is impossible, return `-1`.

## Approach

This problem can be solved using **Breadth-First Search (BFS)** with additional state information.

The state contains:

- Current row.
- Current column.
- Current energy.
- Which litter pieces have already been collected.

Since the same cell can be visited with different energy levels or different collected litter, we must keep track of the complete state.

Use a bitmask to represent collected litter.

For example, if there are 3 litter pieces:

```text
000 → Nothing collected
001 → First litter collected
011 → First and second collected
111 → All collected