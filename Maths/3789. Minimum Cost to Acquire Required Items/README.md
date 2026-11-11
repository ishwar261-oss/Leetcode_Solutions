# 3789. Minimum Cost to Acquire Required Items

**Difficulty:** Medium

**Topics:** Greedy, Math

## Problem

We are given five integers: `cost1`, `cost2`, `costBoth`, `need1`, and `need2`.

There are three types of items:

- **Type 1:** Costs `cost1` and satisfies one unit of requirement 1.
- **Type 2:** Costs `cost2` and satisfies one unit of requirement 2.
- **Type 3:** Costs `costBoth` and satisfies one unit of both requirements.

The goal is to purchase enough items to satisfy both requirements while minimizing the total cost.

## Approach: Greedy + Mathematics

Instead of checking every possible combination, calculate the cost of three possible strategies.

1. **Separate Purchase:** Buy all Type 1 and Type 2 items individually.
2. **Only Combined Purchase:** Buy only Type 3 items to satisfy both requirements.
3. **Mixed Purchase:** Use Type 3 items for the common requirements and purchase the remaining items separately.

Calculate all three costs and return the minimum.

## Complexity Analysis

- **Time Complexity:** O(1) – Only a constant number of arithmetic operations are performed.
- **Space Complexity:** O(1) – No additional data structures are used.

## Key Learning

This problem demonstrates how greedy thinking and mathematical case analysis can optimize a purchasing problem without using loops or dynamic programming.

**Language:** C++