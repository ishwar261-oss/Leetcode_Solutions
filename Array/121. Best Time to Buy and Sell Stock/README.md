<<<<<<< HEAD
=======
<<<<<<< HEAD
# 121. Best Time to Buy and Sell Stock

> **Problem Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Statement

You are given an array where `prices[i]` represents the price of a stock on the `i-th` day.

Choose a day to buy one stock and a different future day to sell it.

Return the maximum profit that can be achieved.

If no profit is possible, return `0`.

---

## Approach

Maintain two variables:

- **Minimum Price** encountered so far.
- **Maximum Profit** obtained so far.

Traverse the array once.

For every price:

- Update the minimum buying price.
- Calculate the profit if sold today.
- Update the maximum profit whenever a larger profit is found.

---

## Algorithm

1. Initialize minimum price with the first element.
2. Initialize maximum profit as `0`.
3. Traverse the array.
4. Update minimum price.
5. Calculate current profit.
6. Update maximum profit.
7. Return maximum profit.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- Greedy
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 121. Best Time to Buy and Sell Stock

> **Problem Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Statement

You are given an array where `prices[i]` represents the price of a stock on the `i-th` day.

Choose a day to buy one stock and a different future day to sell it.

Return the maximum profit that can be achieved.

If no profit is possible, return `0`.

---

## Approach

Maintain two variables:

- **Minimum Price** encountered so far.
- **Maximum Profit** obtained so far.

Traverse the array once.

For every price:

- Update the minimum buying price.
- Calculate the profit if sold today.
- Update the maximum profit whenever a larger profit is found.

---

## Algorithm

1. Initialize minimum price with the first element.
2. Initialize maximum profit as `0`.
3. Traverse the array.
4. Update minimum price.
5. Calculate current profit.
6. Update maximum profit.
7. Return maximum profit.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Arrays
- Greedy
<<<<<<< HEAD
- Dynamic Programming
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Dynamic Programming
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
