# 1470. Shuffle the Array

> **Problem Link:** https://leetcode.com/problems/shuffle-the-array/

## Problem Statement

Given an array

```
[x1,x2,...,xn,y1,y2,...,yn]
```

Return the shuffled array:

```
[x1,y1,x2,y2,...,xn,yn]
```

---

## Approach

Create a new vector.

Traverse the first half of the array.

For every index:

- Insert the current element from the first half.
- Insert the corresponding element from the second half.

Return the newly formed shuffled array.

---

## Algorithm

1. Create an empty answer vector.
2. Traverse from `0` to `n-1`.
3. Push:
   - `nums[i]`
   - `nums[i+n]`
4. Return the answer.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
# 1470. Shuffle the Array

> **Problem Link:** https://leetcode.com/problems/shuffle-the-array/

## Problem Statement

Given an array

```
[x1,x2,...,xn,y1,y2,...,yn]
```

Return the shuffled array:

```
[x1,y1,x2,y2,...,xn,yn]
```

---

## Approach

Create a new vector.

Traverse the first half of the array.

For every index:

- Insert the current element from the first half.
- Insert the corresponding element from the second half.

Return the newly formed shuffled array.

---

## Algorithm

1. Create an empty answer vector.
2. Traverse from `0` to `n-1`.
3. Push:
   - `nums[i]`
   - `nums[i+n]`
4. Return the answer.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(n)** |

---

## Tags

- Arrays
- Simulation
- Simulation
