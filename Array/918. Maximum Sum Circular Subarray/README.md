# 918. Maximum Sum Circular Subarray

## Problem

Given a circular integer array `nums`, return the maximum possible sum of a non-empty subarray.

A circular array means the last element is connected to the first element.

---

## Example 1

**Input**

```
nums = [1,-2,3,-2]
```

**Output**

```
3
```

**Explanation**

The maximum subarray is `[3]`.

---

## Example 2

**Input**

```
nums = [5,-3,5]
```

**Output**

```
10
```

**Explanation**

The maximum circular subarray is `[5,5]`.

---

## Approach

There are two possible cases:

### Case 1: Normal Subarray

The maximum subarray does **not** wrap around.

Find it using **Kadane's Algorithm**.

Example:

```
[3,-1,2]
```

Maximum Sum = **4**

---

### Case 2: Circular Subarray

The subarray wraps around the end of the array.

To find it:

1. Calculate the total sum of the array.
2. Find the minimum subarray sum using Kadane's Algorithm.
3. Circular Sum = Total Sum − Minimum Subarray Sum.

Example:

```
[5,-3,5]

Total Sum = 7
Minimum Subarray = -3

Circular Sum = 7 - (-3) = 10
```

---

### Special Case

If all numbers are negative:

```
[-3,-2,-5]
```

Then:

```
Total Sum - Minimum Sum = 0
```

which is invalid because the subarray cannot be empty.

So simply return the normal maximum subarray sum.

---

## Algorithm

1. Initialize:
   - `totalSum`
   - `currMax`
   - `maxSum`
   - `currMin`
   - `minSum`
2. Traverse the array once.
3. Update:
   - Maximum subarray (Kadane)
   - Minimum subarray (Kadane)
   - Total sum
4. If all elements are negative, return `maxSum`.
5. Otherwise return:

```
max(maxSum, totalSum - minSum)
```


## Dry Run

Input

```
nums = [5,-3,5]
```

| num | currMax | maxSum | currMin | minSum | total |
|-----|---------|---------|---------|---------|-------|
|5|5|5|5|5|5|
|-3|2|5|-3|-3|2|
|5|7|7|2|-3|7|

Normal Maximum

```
7
```

Circular Maximum

```
7 - (-3) = 10
```

Answer

```
max(7,10) = 10
```

---

## Complexity

**Time**

```
O(n)
```

**Space**

```
O(1)
```

---

## Concepts Used

- Arrays
- Kadane's Algorithm
- Circular Array
- Dynamic Programming
- Greedy

---

## Tags

# 918. Maximum Sum Circular Subarray

## Problem

Given a circular integer array `nums`, return the maximum possible sum of a non-empty subarray.

A circular array means the last element is connected to the first element.

---

## Example 1

**Input**

```
nums = [1,-2,3,-2]
```

**Output**

```
3
```

**Explanation**

The maximum subarray is `[3]`.

---

## Example 2

**Input**

```
nums = [5,-3,5]
```

**Output**

```
10
```

**Explanation**

The maximum circular subarray is `[5,5]`.

---

## Approach

There are two possible cases:

### Case 1: Normal Subarray

The maximum subarray does **not** wrap around.

Find it using **Kadane's Algorithm**.

Example:

```
[3,-1,2]
```

Maximum Sum = **4**

---

### Case 2: Circular Subarray

The subarray wraps around the end of the array.

To find it:

1. Calculate the total sum of the array.
2. Find the minimum subarray sum using Kadane's Algorithm.
3. Circular Sum = Total Sum − Minimum Subarray Sum.

Example:

```
[5,-3,5]

Total Sum = 7
Minimum Subarray = -3

Circular Sum = 7 - (-3) = 10
```

---

### Special Case

If all numbers are negative:

```
[-3,-2,-5]
```

Then:

```
Total Sum - Minimum Sum = 0
```

which is invalid because the subarray cannot be empty.

So simply return the normal maximum subarray sum.

---

## Algorithm

1. Initialize:
   - `totalSum`
   - `currMax`
   - `maxSum`
   - `currMin`
   - `minSum`
2. Traverse the array once.
3. Update:
   - Maximum subarray (Kadane)
   - Minimum subarray (Kadane)
   - Total sum
4. If all elements are negative, return `maxSum`.
5. Otherwise return:

```
max(maxSum, totalSum - minSum)
```


## Dry Run

Input

```
nums = [5,-3,5]
```

| num | currMax | maxSum | currMin | minSum | total |
|-----|---------|---------|---------|---------|-------|
|5|5|5|5|5|5|
|-3|2|5|-3|-3|2|
|5|7|7|2|-3|7|

Normal Maximum

```
7
```

Circular Maximum

```
7 - (-3) = 10
```

Answer

```
max(7,10) = 10
```

---

## Complexity

**Time**

```
O(n)
```

**Space**

```
O(1)
```

---

## Concepts Used

- Arrays
- Kadane's Algorithm
- Circular Array
- Dynamic Programming
- Greedy

---

## Tags

`Array` `Dynamic Programming` `Kadane's Algorithm`
`Array` `Dynamic Programming` `Kadane's Algorithm`
