<<<<<<< HEAD
# 595. Big Countries

## Problem Statement

Write a SQL query to find the name, population, and area of countries that are considered **big**.

A country is big if:

- Its area is at least `3,000,000` square kilometers, or
- Its population is at least `25,000,000`.

Return the result table in any order.

---

## Approach

Filter the `World` table using the `WHERE` clause.

A country is included if **either** its area or population satisfies the required condition.

---

## SQL Solution

```sql
SELECT name, population, area
FROM World
WHERE area >= 3000000
   OR population >= 25000000;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- OR Operator
- Filtering Rows

---

## Tags

=======
# 595. Big Countries

## Problem Statement

Write a SQL query to find the name, population, and area of countries that are considered **big**.

A country is big if:

- Its area is at least `3,000,000` square kilometers, or
- Its population is at least `25,000,000`.

Return the result table in any order.

---

## Approach

Filter the `World` table using the `WHERE` clause.

A country is included if **either** its area or population satisfies the required condition.

---

## SQL Solution

```sql
SELECT name, population, area
FROM World
WHERE area >= 3000000
   OR population >= 25000000;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- OR Operator
- Filtering Rows

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Easy` `Filtering`