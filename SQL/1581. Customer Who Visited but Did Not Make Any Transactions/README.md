<<<<<<< HEAD
=======
<<<<<<< HEAD
# 1581. Customer Who Visited but Did Not Make Any Transactions

## Problem Statement

Write a SQL query to find the number of visits made by each customer where no transaction occurred.

Return the customer ID and the number of such visits.

---

## Approach

Use a `LEFT JOIN` to combine the `Visits` and `Transactions` tables.

- If a visit has no matching transaction, the `transaction_id` will be `NULL`.
- Count these visits for each customer using `GROUP BY`.

---


## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- LEFT JOIN
- GROUP BY
- COUNT()
- NULL Handling

---

## Tags

=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 1581. Customer Who Visited but Did Not Make Any Transactions

## Problem Statement

Write a SQL query to find the number of visits made by each customer where no transaction occurred.

Return the customer ID and the number of such visits.

---

## Approach

Use a `LEFT JOIN` to combine the `Visits` and `Transactions` tables.

- If a visit has no matching transaction, the `transaction_id` will be `NULL`.
- Count these visits for each customer using `GROUP BY`.

---


## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- LEFT JOIN
- GROUP BY
- COUNT()
- NULL Handling

---

## Tags

<<<<<<< HEAD
`SQL` `Easy` `JOIN` `GROUP BY`
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Easy` `JOIN` `GROUP BY`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
