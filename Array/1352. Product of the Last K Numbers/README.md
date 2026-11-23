# 1352. Product of the Last K Numbers

## Problem
Design a data structure that supports two operations:

- **add(num):** Adds an integer `num` to the stream.
- **getProduct(k):** Returns the product of the last `k` numbers in the stream.

## Approach: Prefix Product

1. Maintain a vector to store prefix products.
2. Initialize the vector with `1` to simplify product calculations.
3. When a new number is added, multiply it with the previous prefix product.
4. If the added number is `0`, reset the prefix vector because any product containing zero is zero.
5. To calculate the product of the last `k` numbers, divide the latest prefix product by the prefix product before those `k` numbers.
6. If `k` is greater than or equal to the current prefix vector size, return `0` because the range contains a zero.

## Complexity Analysis

- **Time Complexity:**
  - `add(num)` – O(1)
  - `getProduct(k)` – O(1)

- **Space Complexity:** O(n), where n is the number of elements added since the last zero.

## Example

**Operations:**

`add(3), add(0), add(2), add(5), add(4)`

**Results:**

- `getProduct(2)` = 20
- `getProduct(3)` = 40
- `getProduct(4)` = 0

## Key Concept
Prefix products allow us to calculate the product of the last `k` numbers in constant time. Resetting the prefix vector whenever zero is encountered handles zero efficiently.