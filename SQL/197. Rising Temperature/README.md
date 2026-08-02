# 197. Rising Temperature

## Problem Statement

Write a SQL query to find all dates' IDs where the temperature was higher than the previous day's temperature.

Return the result table in any order.

---

## Approach

Use a self join on the `Weather` table:

- Join each record with the previous day's record using `DATEDIFF()`.
- Compare the temperatures.
- Return the IDs where today's temperature is higher than yesterday's.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- SELF JOIN
- DATEDIFF()
- WHERE

---

## Tags

`SQL` `Easy` `Join`
