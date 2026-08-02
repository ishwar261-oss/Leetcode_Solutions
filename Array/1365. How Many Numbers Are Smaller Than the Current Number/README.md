<<<<<<< HEAD
# 1365. How Many Numbers Are Smaller Than the Current Number

> **Problem Link:** https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

## Problem Statement

For every element in the array, determine how many numbers are strictly smaller than it.

Return the count for every index.

---

## Approach

### Brute Force

Compare every element with every other element.

For each number:

- Traverse the complete array.
- Count numbers smaller than the current element.
- Store the count in the answer array.

### Optimal Approach

Copy and sort the array.

Store the first occurrence of every element in a hash map.

Since the sorted index represents the number of smaller elements, use the map to construct the answer array.

---

## Algorithm (Brute Force)

1. Create an answer array.
2. Traverse each element.
3. Compare it with every other element.
4. Count smaller elements.
5. Store the count.
6. Return the answer.

---

## Complexity Analysis (Brute Force)

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n²)** |
| **Space Complexity** | **O(n)** |

---

## Complexity Analysis (Optimal)

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n log n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
- Sorting
- Hash Map
=======
# 1365. How Many Numbers Are Smaller Than the Current Number

> **Problem Link:** https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

## Problem Statement

For every element in the array, determine how many numbers are strictly smaller than it.

Return the count for every index.

---

## Approach

### Brute Force

Compare every element with every other element.

For each number:

- Traverse the complete array.
- Count numbers smaller than the current element.
- Store the count in the answer array.

### Optimal Approach

Copy and sort the array.

Store the first occurrence of every element in a hash map.

Since the sorted index represents the number of smaller elements, use the map to construct the answer array.

---

## Algorithm (Brute Force)

1. Create an answer array.
2. Traverse each element.
3. Compare it with every other element.
4. Count smaller elements.
5. Store the count.
6. Return the answer.

---

## Complexity Analysis (Brute Force)

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n²)** |
| **Space Complexity** | **O(n)** |

---

## Complexity Analysis (Optimal)

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n log n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
- Sorting
- Hash Map
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Brute Force