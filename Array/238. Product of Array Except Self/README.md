<<<<<<< HEAD
x# 238. Product of Array Except Self

> **Problem Link:** https://leetcode.com/problems/product-of-array-except-self/

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

```
answer[i] = product of all elements except nums[i]
```

The solution must run in **O(n)** time and **must not use division**.

---

## Approach

Instead of calculating the product repeatedly, compute:

- Prefix Product → Product of all elements before the current index.
- Suffix Product → Product of all elements after the current index.

Store prefix products in the answer array.

Traverse from right to left while maintaining the suffix product and multiply it with the corresponding prefix product.

This avoids division and satisfies the required time complexity.

---

## Algorithm

1. Create an answer array initialized with `1`.
2. Traverse from left to right.
3. Store prefix products.
4. Traverse from right to left.
5. Maintain suffix product.
6. Multiply suffix with stored prefix.
7. Return the answer array.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** *(excluding the output array)* |

---

## Tags

- Arrays
- Prefix Sum
- Suffix Product
=======
x# 238. Product of Array Except Self

> **Problem Link:** https://leetcode.com/problems/product-of-array-except-self/

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

```
answer[i] = product of all elements except nums[i]
```

The solution must run in **O(n)** time and **must not use division**.

---

## Approach

Instead of calculating the product repeatedly, compute:

- Prefix Product → Product of all elements before the current index.
- Suffix Product → Product of all elements after the current index.

Store prefix products in the answer array.

Traverse from right to left while maintaining the suffix product and multiply it with the corresponding prefix product.

This avoids division and satisfies the required time complexity.

---

## Algorithm

1. Create an answer array initialized with `1`.
2. Traverse from left to right.
3. Store prefix products.
4. Traverse from right to left.
5. Maintain suffix product.
6. Multiply suffix with stored prefix.
7. Return the answer array.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(1)** *(excluding the output array)* |

---

## Tags

- Arrays
- Prefix Sum
- Suffix Product
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Dynamic Programming