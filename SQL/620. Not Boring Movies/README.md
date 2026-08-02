# 620. Not Boring Movies

## Problem Statement

Write a SQL query to display all movies that:

- Have an **odd-numbered id**.
- Have a **description other than "boring"**.

Return the result ordered by **rating in descending order**.

---

## Approach

- Select all columns from the `Cinema` table.
- Filter rows where:
  - `id` is odd using `% 2 = 1`.
  - `description` is not `"boring"`.
- Sort the result by `rating` in descending order.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- SELECT
- WHERE
- Modulo (%)
- ORDER BY
- DESC

---

## Tags

`SQL` `Easy`
