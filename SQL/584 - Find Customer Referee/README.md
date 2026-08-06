# 584. Find Customer Referee

## Problem Statement

Write a SQL query to report the names of customers who:

- Were **not referred by customer with ID = 2**
- Or **have no referee**

Return the result table in any order.

---

## Approach

Some customers have `NULL` as their referee ID, meaning they were not referred by anyone.

Select customers where:

- `referee_id` is not equal to `2`, or
- `referee_id` is `NULL`

---

## SQL Solution

```sql
SELECT name
FROM Customer
WHERE referee_id <> 2
   OR referee_id IS NULL;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- NULL Handling
- OR Operator

---

## Tags

# 584. Find Customer Referee

## Problem Statement

Write a SQL query to report the names of customers who:

- Were **not referred by customer with ID = 2**
- Or **have no referee**

Return the result table in any order.

---

## Approach

Some customers have `NULL` as their referee ID, meaning they were not referred by anyone.

Select customers where:

- `referee_id` is not equal to `2`, or
- `referee_id` is `NULL`

---

## SQL Solution

```sql
SELECT name
FROM Customer
WHERE referee_id <> 2
   OR referee_id IS NULL;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- NULL Handling
- OR Operator

---

## Tags

`SQL` `Easy` `NULL` `Filtering`
`SQL` `Easy` `NULL` `Filtering`
