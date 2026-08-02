<<<<<<< HEAD
# 53. Maximum Subarray

> **Problem Link:** https://leetcode.com/problems/maximum-subarray/

## Current Implementation

This implementation generates and prints **all possible subarrays** of the given array.

It serves as a foundational step toward understanding the brute-force approach for the Maximum Subarray problem.

---

## Approach

Use three nested loops:

- The first loop selects the starting index.
- The second loop selects the ending index.
- The third loop prints every element between the selected indices.

This generates every possible contiguous subarray. :contentReference[oaicite:3]{index=3}

---

## Algorithm

1. Select the starting index.
2. Select every possible ending index.
3. Print all elements between them.
4. Repeat until all subarrays are generated.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n³)** |
| **Space Complexity** | **O(1)** |

---

## Note

This implementation **does not compute the maximum subarray sum**.

The next optimization is:
- Better Approach → O(n²)
- Optimal Approach (Kadane's Algorithm) → O(n)

---

## Tags

- Arrays
- Brute Force
=======
# 53. Maximum Subarray

> **Problem Link:** https://leetcode.com/problems/maximum-subarray/

## Current Implementation

This implementation generates and prints **all possible subarrays** of the given array.

It serves as a foundational step toward understanding the brute-force approach for the Maximum Subarray problem.

---

## Approach

Use three nested loops:

- The first loop selects the starting index.
- The second loop selects the ending index.
- The third loop prints every element between the selected indices.

This generates every possible contiguous subarray. :contentReference[oaicite:3]{index=3}

---

## Algorithm

1. Select the starting index.
2. Select every possible ending index.
3. Print all elements between them.
4. Repeat until all subarrays are generated.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n³)** |
| **Space Complexity** | **O(1)** |

---

## Note

This implementation **does not compute the maximum subarray sum**.

The next optimization is:
- Better Approach → O(n²)
- Optimal Approach (Kadane's Algorithm) → O(n)

---

## Tags

- Arrays
- Brute Force
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Subarrays