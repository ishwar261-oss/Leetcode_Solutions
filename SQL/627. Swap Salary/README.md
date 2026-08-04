<<<<<<< HEAD
=======
<<<<<<< HEAD
# 627. Swap Salary

## Problem Statement

The `Salary` table contains employee information, including a `sex` column with values:

- `'m'` for male
- `'f'` for female

Write a SQL query to swap all `'m'` values to `'f'` and all `'f'` values to `'m'` **without using a temporary table**.

---

## Approach

Use the `CASE` statement to update the `sex` column.

- If `sex = 'm'`, change it to `'f'`.
- Otherwise, change it to `'m'`.

This updates every row in a single query.

---

## Algorithm

1. Update the `Salary` table.
2. Use `CASE` to check the current value of `sex`.
3. Replace `'m'` with `'f'`.
4. Replace `'f'` with `'m'`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- UPDATE
- CASE
- Conditional Logic

---

## Tags

=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 627. Swap Salary

## Problem Statement

The `Salary` table contains employee information, including a `sex` column with values:

- `'m'` for male
- `'f'` for female

Write a SQL query to swap all `'m'` values to `'f'` and all `'f'` values to `'m'` **without using a temporary table**.

---

## Approach

Use the `CASE` statement to update the `sex` column.

- If `sex = 'm'`, change it to `'f'`.
- Otherwise, change it to `'m'`.

This updates every row in a single query.

---

## Algorithm

1. Update the `Salary` table.
2. Use `CASE` to check the current value of `sex`.
3. Replace `'m'` with `'f'`.
4. Replace `'f'` with `'m'`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- UPDATE
- CASE
- Conditional Logic

---

## Tags

<<<<<<< HEAD
`SQL` `Easy` `UPDATE` `CASE`
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Easy` `UPDATE` `CASE`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
