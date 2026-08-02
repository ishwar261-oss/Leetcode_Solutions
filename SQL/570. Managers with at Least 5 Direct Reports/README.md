# 570. Managers with at Least 5 Direct Reports

## Problem Statement

Write a SQL query to find the names of managers who have at least **5 direct reports**.

Return the result table in any order.

---

## Approach

- Perform a self join on the `Employee` table.
- Match each manager with their direct reports.
- Group by the manager.
- Use `HAVING` to filter managers with at least five employees reporting directly to them.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELF JOIN
- GROUP BY
- HAVING
- COUNT()

---

## Tags

`SQL` `Easy` `JOIN` `GROUP BY`
