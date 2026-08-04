<<<<<<< HEAD
=======
<<<<<<< HEAD
# 1929. Concatenation of Array

> **Problem Link:** https://leetcode.com/problems/concatenation-of-array/

## Problem Statement

Given an integer array `nums` of length `n`, return an array `ans` of length `2n` where:

- `ans[i] = nums[i]`
- `ans[i + n] = nums[i]`

for `0 ≤ i < n`.

---

## Approach

Create a new array of size `2n`.

Traverse the original array once and copy each element into:
- its original position.
- the corresponding position in the second half of the new array.

This directly constructs the concatenated array in a single traversal. :contentReference[oaicite:0]{index=0}

---

## Algorithm

1. Find the size of the array.
2. Create a vector of size `2 * n`.
3. Traverse the original array.
4. Store every element at index `i`.
5. Store the same element again at index `i + n`.
6. Return the resulting vector.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 1929. Concatenation of Array

> **Problem Link:** https://leetcode.com/problems/concatenation-of-array/

## Problem Statement

Given an integer array `nums` of length `n`, return an array `ans` of length `2n` where:

- `ans[i] = nums[i]`
- `ans[i + n] = nums[i]`

for `0 ≤ i < n`.

---

## Approach

Create a new array of size `2n`.

Traverse the original array once and copy each element into:
- its original position.
- the corresponding position in the second half of the new array.

This directly constructs the concatenated array in a single traversal. :contentReference[oaicite:0]{index=0}

---

## Algorithm

1. Find the size of the array.
2. Create a vector of size `2 * n`.
3. Traverse the original array.
4. Store every element at index `i`.
5. Store the same element again at index `i + n`.
6. Return the resulting vector.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
<<<<<<< HEAD
- Simulation
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Simulation
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
