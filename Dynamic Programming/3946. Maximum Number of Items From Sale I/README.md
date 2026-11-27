# 3946. Maximum Number of Items From Sale I

**Difficulty:** Easy

## Problem Statement

Given three integers `budget`, `price`, and `m`, find the maximum number of items that can be purchased.

The first item costs `price` coins, and the price of each next item increases by `m` coins.

Return the maximum number of items that can be purchased without exceeding the given budget.

## Approach

**Greedy / Simulation**

- Initialize a counter to store the number of items purchased.
- Start with the initial item price.
- Check whether the remaining budget is enough to purchase the current item.
- If affordable, subtract its price from the budget.
- Increase the item price by `m`.
- Repeat until the budget is insufficient.
- Return the total number of purchased items.

## Complexity Analysis

- **Time Complexity:** O(k), where k is the number of items purchased.
- **Space Complexity:** O(1), as only a few variables are used.

## Key Concepts

- Greedy Algorithm
- Simulation
- Basic Mathematics