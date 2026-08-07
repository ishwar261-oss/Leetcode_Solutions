# 75. Sort Colors

## Problem

Given an array `nums` containing only `0`, `1`, and `2`, sort the array in-place without using the library sort function.

- `0` represents Red
- `1` represents White
- `2` represents Blue

Return the sorted array.

---

## Approach

Use the **Dutch National Flag Algorithm**.

Maintain three pointers:

- `low` → Position where the next `0` should be placed.
- `mid` → Current element being processed.
- `high` → Position where the next `2` should be placed.

### Rules

- If `nums[mid] == 0`
  - Swap `low` and `mid`.
  - Increment both `low` and `mid`.

- If `nums[mid] == 1`
  - It is already in the correct position.
  - Increment `mid`.

- If `nums[mid] == 2`
  - Swap `mid` and `high`.
  - Decrement `high`.
  - Do **not** increment `mid` because the swapped element must be checked.

---

## Algorithm

1. Initialize:
   - `low = 0`
   - `mid = 0`
   - `high = n - 1`
2. While `mid <= high`:
   - If current element is `0`, swap with `low`.
   - If current element is `1`, move `mid`.
   - If current element is `2`, swap with `high`.
3. Continue until all elements are processed.

---

## Example

### Input

```
nums = [2,0,2,1,1,0]
```

### Output

```
[0,0,1,1,2,2]
```

### Explanation

The array is sorted in a single traversal using three pointers.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Two Pointers
- Dutch National Flag Algorithm
- In-place Sorting

---

## Tags

`Array` `Two Pointers` `Sorting`