# LeetCode 2965 - Find Missing and Repeated Values

## Problem Statement

You are given an `n × n` matrix containing numbers from `1` to `n²`.

- Exactly one number appears **twice**.
- Exactly one number is **missing**.

Return the repeated and missing numbers.

---

## Approach

1. Calculate the maximum number (`n × n`).
2. Create a frequency array of size `n² + 1`.
3. Traverse the matrix and count the frequency of every number.
4. Traverse the frequency array:
   - Frequency = `2` → Repeated Number
   - Frequency = `0` → Missing Number
5. Return both values.

---

## Algorithm

1. Read the matrix.
2. Create `freq[n*n + 1]` initialized with `0`.
3. Count the occurrence of every element.
4. Find:
   - Duplicate → `freq[i] == 2`
   - Missing → `freq[i] == 0`
5. Print the result.

---

## Dry Run

### Input

```
1 3
2 2
```

Frequency Array

| Number | Frequency |
|--------|----------:|
|1|1|
|2|2 ← Duplicate|
|3|1|
|4|0 ← Missing|

Output

```
Repeated = 2
Missing = 4
```

---

## Complexity Analysis

- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(n²)`

---

## Concepts Used

- Array
- Matrix
- Frequency Array
- Nested Loops
- Counting
