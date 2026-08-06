# 1757. Recyclable and Low Fat Products

## Problem Statement

Write a SQL query to find the IDs of products that are both:

- Recyclable (`recyclable = 'Y'`)
- Low Fat (`low_fats = 'Y'`)

Return the result table in any order.

---

## Approach

Filter the `Products` table using the `WHERE` clause to select only those rows where both conditions are satisfied.

---

## SQL Solution

```sql
SELECT product_id
FROM Products
WHERE low_fats = 'Y'
  AND recyclable = 'Y';
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- Logical AND
- Filtering Rows

---

## Tags

`SQL` `Easy` `Filtering`
