# 74. Search a 2D Matrix

## Problem Statement

Given an `m × n` matrix where:

- Each row is sorted in ascending order.
- The first integer of each row is greater than the last integer of the previous row.

Return `true` if the target exists; otherwise return `false`.

---

## Example

### Input

```
matrix =
[
 [1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]
]

target = 3
```

### Output

```
true
```

---

## Approach

The matrix behaves like one sorted array.

Instead of searching every row, perform Binary Search on the virtual 1D array.

Convert the middle index into row and column.

```
row = mid / columns
col = mid % columns
```

---

## Algorithm

1. Find rows and columns.
2. Set left and right pointers.
3. Calculate middle index.
4. Convert middle into row and column.
5. Compare with target.
6. Move left or right pointer.
7. Repeat until found.

---

## Complexity Analysis

- **Time Complexity:** O(log(m × n))
- **Space Complexity:** O(1)

---

## Concepts Used

- Binary Search
- Matrix
- Index Conversion

---

## Tags

`Array` `Matrix` `Binary Search`
