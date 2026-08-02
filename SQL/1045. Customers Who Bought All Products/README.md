# 1045. Customers Who Bought All Products

## Problem

Find the customers who have purchased every product listed in the `Product` table.

---

## Approach

- Count the total number of products.
- Count the distinct products purchased by each customer.
- Compare both counts.
- Return customers whose counts are equal.

---

## Algorithm

1. Count all products.
2. Group purchases by `customer_id`.
3. Count distinct products for each customer.
4. Use `HAVING` to compare with the total product count.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- GROUP BY
- HAVING
- COUNT()
- Subquery

---

## Tags

`SQL` `Database` `GROUP BY` `HAVING`