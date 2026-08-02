# 1068. Product Sales Analysis I

## Problem Statement

Write a SQL query to report the product name, year, and price for each sale.

Return the result table in any order.

---

## Approach

Use an `INNER JOIN` to combine the `Sales` and `Product` tables based on the `product_id`.

Retrieve:
- Product name
- Year of sale
- Price

---


## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- INNER JOIN
- Table Aliases

---

## Tags

`SQL` `Easy` `JOIN`
