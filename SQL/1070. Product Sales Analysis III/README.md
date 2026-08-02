<<<<<<< HEAD
# 1070. Product Sales Analysis III

## Problem

Find the first year each product was sold and return its `product_id`, `first_year`, `quantity`, and `price`.

---

## Approach

- Find the earliest year for each product using `MIN(year)`.
- Join this result with the `Sales` table.
- Select the sales record that matches the first year.
- Return the required columns.

---

## Algorithm

1. Group sales by `product_id`.
2. Find the minimum year for each product.
3. Join with the `Sales` table.
4. Return the matching records.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- JOIN
- GROUP BY
- MIN()
- Aggregate Functions

---

## Tags

=======
# 1070. Product Sales Analysis III

## Problem

Find the first year each product was sold and return its `product_id`, `first_year`, `quantity`, and `price`.

---

## Approach

- Find the earliest year for each product using `MIN(year)`.
- Join this result with the `Sales` table.
- Select the sales record that matches the first year.
- Return the required columns.

---

## Algorithm

1. Group sales by `product_id`.
2. Find the minimum year for each product.
3. Join with the `Sales` table.
4. Return the matching records.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- JOIN
- GROUP BY
- MIN()
- Aggregate Functions

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Database` `JOIN` `GROUP BY`