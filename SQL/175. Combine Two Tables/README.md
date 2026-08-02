<<<<<<< HEAD
# 175. Combine Two Tables

> **Problem Link:** https://leetcode.com/problems/combine-two-tables/

## Problem Statement

Write a SQL query to report the first name, last name, city, and state of every person in the `Person` table.

If a person's address is not available, return `NULL` for the city and state.

---

## Approach

The required information is stored in two tables:

- `Person` contains personal details.
- `Address` contains address details.

Since every person should appear in the output regardless of whether they have an address, use a **LEFT JOIN**.

The `personId` column is used to match records from both tables.

---

## Algorithm

1. Select the required columns from the `Person` table.
2. Perform a **LEFT JOIN** with the `Address` table.
3. Match records using `personId`.
4. Return the result.

---

## SQL Query

```sql
SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;
```

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** *(depends on indexing)* |
| **Space Complexity** | **O(1)** |

---

## SQL Concepts Used

- SELECT
- LEFT JOIN
- ON

---

## Tags

- SQL
- JOIN
=======
# 175. Combine Two Tables

> **Problem Link:** https://leetcode.com/problems/combine-two-tables/

## Problem Statement

Write a SQL query to report the first name, last name, city, and state of every person in the `Person` table.

If a person's address is not available, return `NULL` for the city and state.

---

## Approach

The required information is stored in two tables:

- `Person` contains personal details.
- `Address` contains address details.

Since every person should appear in the output regardless of whether they have an address, use a **LEFT JOIN**.

The `personId` column is used to match records from both tables.

---

## Algorithm

1. Select the required columns from the `Person` table.
2. Perform a **LEFT JOIN** with the `Address` table.
3. Match records using `personId`.
4. Return the result.

---

## SQL Query

```sql
SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;
```

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** *(depends on indexing)* |
| **Space Complexity** | **O(1)** |

---

## SQL Concepts Used

- SELECT
- LEFT JOIN
- ON

---

## Tags

- SQL
- JOIN
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Easy