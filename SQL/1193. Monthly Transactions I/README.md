<<<<<<< HEAD
# 1193. Monthly Transactions I

## Problem Statement

The `Transactions` table stores transaction details such as:

- Transaction date
- Country
- State (`approved` or `declined`)
- Amount

For each **month** and **country**, find:

- Total number of transactions.
- Number of approved transactions.
- Total transaction amount.
- Total amount of approved transactions.

Return the results grouped by **month** and **country**.

---

## Approach

1. Convert the transaction date into `YYYY-MM` format.
2. Group records by **month** and **country**.
3. Count all transactions.
4. Count approved transactions.
5. Sum all transaction amounts.
6. Sum only approved transaction amounts using `CASE`.

---

## Algorithm

1. Select the month using `DATE_FORMAT()`.
2. Select the country.
3. Count all rows using `COUNT(*)`.
4. Count approved transactions using `SUM(state = 'approved')`.
5. Sum all amounts using `SUM(amount)`.
6. Sum approved amounts using `CASE`.
7. Group by month and country.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- GROUP BY
- Aggregate Functions
- COUNT()
- SUM()
- CASE
- DATE_FORMAT()

---

## Tags

=======
# 1193. Monthly Transactions I

## Problem Statement

The `Transactions` table stores transaction details such as:

- Transaction date
- Country
- State (`approved` or `declined`)
- Amount

For each **month** and **country**, find:

- Total number of transactions.
- Number of approved transactions.
- Total transaction amount.
- Total amount of approved transactions.

Return the results grouped by **month** and **country**.

---

## Approach

1. Convert the transaction date into `YYYY-MM` format.
2. Group records by **month** and **country**.
3. Count all transactions.
4. Count approved transactions.
5. Sum all transaction amounts.
6. Sum only approved transaction amounts using `CASE`.

---

## Algorithm

1. Select the month using `DATE_FORMAT()`.
2. Select the country.
3. Count all rows using `COUNT(*)`.
4. Count approved transactions using `SUM(state = 'approved')`.
5. Sum all amounts using `SUM(amount)`.
6. Sum approved amounts using `CASE`.
7. Group by month and country.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- GROUP BY
- Aggregate Functions
- COUNT()
- SUM()
- CASE
- DATE_FORMAT()

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Medium` `GROUP BY` `Aggregation`