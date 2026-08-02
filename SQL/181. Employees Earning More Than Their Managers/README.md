# 181. Employees Earning More Than Their Managers

> **Problem Link:** https://leetcode.com/problems/employees-earning-more-than-their-managers/

## Problem Statement

Write a SQL query to find the names of employees whose salary is greater than the salary of their respective managers.

Return the employee names.

---

## Approach

The manager information is stored in the same table as the employee information.

To compare an employee with their manager, perform a **SELF JOIN**.

After joining:

- Compare the employee's salary with the manager's salary.
- Return employees whose salary is greater.

---

## Algorithm

1. Create two aliases for the `Employee` table:
   - One for employees.
   - One for managers.
2. Join the table using `managerId = id`.
3. Compare employee and manager salaries.
4. Return employee names.

---

## SQL Query

```sql
SELECT
    e.name AS Employee
FROM Employee e
JOIN Employee m
ON e.managerId = m.id
WHERE e.salary > m.salary;
```

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** *(with proper indexing)* |
| **Space Complexity** | **O(1)** |

---

## SQL Concepts Used

- SELECT
- SELF JOIN
- WHERE
- Table Aliases

---

## Tags

- SQL
- SELF JOIN
- Easy