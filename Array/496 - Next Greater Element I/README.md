<<<<<<< HEAD
# 496. Next Greater Element I

## Problem Statement

Given two arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`, find the next greater element for every element in `nums1`.

The **next greater element** is the first element to the right in `nums2` that is greater than the current element.

If no greater element exists, return `-1`.

---

## Approach (Brute Force)

1. For every element in `nums1`, locate it in `nums2`.
2. Scan the elements to its right.
3. Return the first greater element found.
4. If none exists, return `-1`.

---

## Algorithm

1. Initialize an answer vector.
2. Loop through every element of `nums1`.
3. Find its index in `nums2`.
4. Search to the right for a greater element.
5. Store the result in the answer vector.
6. Return the answer.

---

## Dry Run

Input

```
nums1 = [4,1,2]
nums2 = [1,3,4,2]
```

Process

```
4 → No greater element → -1
1 → Next greater is 3
2 → No greater element → -1
```

Output

```
[-1,3,-1]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n × m)`
- **Space Complexity:** `O(1)` (excluding output)

---

## Topics

- Array
- Brute Force
=======
# 496. Next Greater Element I

## Problem Statement

Given two arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`, find the next greater element for every element in `nums1`.

The **next greater element** is the first element to the right in `nums2` that is greater than the current element.

If no greater element exists, return `-1`.

---

## Approach (Brute Force)

1. For every element in `nums1`, locate it in `nums2`.
2. Scan the elements to its right.
3. Return the first greater element found.
4. If none exists, return `-1`.

---

## Algorithm

1. Initialize an answer vector.
2. Loop through every element of `nums1`.
3. Find its index in `nums2`.
4. Search to the right for a greater element.
5. Store the result in the answer vector.
6. Return the answer.

---

## Dry Run

Input

```
nums1 = [4,1,2]
nums2 = [1,3,4,2]
```

Process

```
4 → No greater element → -1
1 → Next greater is 3
2 → No greater element → -1
```

Output

```
[-1,3,-1]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n × m)`
- **Space Complexity:** `O(1)` (excluding output)

---

## Topics

- Array
- Brute Force
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Searching