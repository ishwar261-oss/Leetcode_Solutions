# 88. Merge Sorted Array

## Problem

You are given two sorted integer arrays `nums1` and `nums2`.

- `nums1` has a size of `m + n`, where the first `m` elements are valid and the last `n` elements are `0`.
- `nums2` contains `n` sorted elements.

Merge `nums2` into `nums1` so that `nums1` becomes one sorted array.

---

## Approach

- Start comparing elements from the end of both arrays.
- Place the larger element at the last available position in `nums1`.
- Continue until all elements of `nums2` are placed.
- Since `nums1` already contains its own sorted elements, no extra array is needed.

---

## Algorithm

1. Initialize:
   - `i = m - 1`
   - `j = n - 1`
   - `k = m + n - 1`
2. Compare `nums1[i]` and `nums2[j]`.
3. Place the larger element at `nums1[k]`.
4. Move the corresponding pointer backward.
5. Repeat until `nums2` is completely merged.

---

## Example

### Input

```
nums1 = [1,2,3,0,0,0]
m = 3

nums2 = [2,5,6]
n = 3
```

### Output

```
[1,2,2,3,5,6]
```

---

## Complexity

- **Time Complexity:** `O(m + n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Two Pointers
- Arrays
- In-place Merge
- Simulation

---

## Tags

`Array` `Two Pointers` `Sorting`