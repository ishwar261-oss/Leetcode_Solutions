<<<<<<< HEAD
# 153. Find Minimum in Rotated Sorted Array

## Problem

Given a rotated sorted array with unique elements, find the minimum element in `O(log n)` time.

---

## Approach

- Use Binary Search to locate the rotation point.
- Compare the middle element with the last element.
- If the middle element is greater, the minimum lies in the right half.
- Otherwise, the minimum is in the left half (including the middle element).

---

## Algorithm

1. Initialize `low` and `high`.
2. Find the middle index.
3. Compare `nums[mid]` with `nums[high]`.
4. Update the search range accordingly.
5. Return `nums[low]`.

---

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Binary Search
- Rotated Array
- Divide and Conquer

---

## Tags

=======
# 153. Find Minimum in Rotated Sorted Array

## Problem

Given a rotated sorted array with unique elements, find the minimum element in `O(log n)` time.

---

## Approach

- Use Binary Search to locate the rotation point.
- Compare the middle element with the last element.
- If the middle element is greater, the minimum lies in the right half.
- Otherwise, the minimum is in the left half (including the middle element).

---

## Algorithm

1. Initialize `low` and `high`.
2. Find the middle index.
3. Compare `nums[mid]` with `nums[high]`.
4. Update the search range accordingly.
5. Return `nums[low]`.

---

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Binary Search
- Rotated Array
- Divide and Conquer

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Array` `Binary Search`