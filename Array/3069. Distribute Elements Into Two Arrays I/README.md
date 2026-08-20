
# 3069. Distribute Elements Into Two Arrays I

## Problem

Given an array `nums`, distribute its elements into two arrays `arr1` and `arr2`.

The rules are:

- The first element goes into `arr1`.
- The second element goes into `arr2`.
- For every remaining element:
  - If the last element of `arr1` is greater than the last element of `arr2`, add the current element to `arr1`.
  - Otherwise, add it to `arr2`.

Finally, combine:

```text
arr1 + arr2
```

and return the resulting array.

## Example

```text
Input:
[2, 1, 3]

Output:
[2, 3, 1]
```

### Explanation

Initially:

```text
arr1 = [2]
arr2 = [1]
```

Next element:

```text
3
```

Compare the last elements:

```text
2 > 1
```

So `3` is added to `arr1`.

```text
arr1 = [2, 3]
arr2 = [1]
```

Finally, combine both arrays:

```text
[2, 3] + [1]
```

Result:

```text
[2, 3, 1]
```

## Approach

This problem can be solved using **simple simulation**.

Create two arrays:

```text
arr1
arr2
```

Put the first two elements into their respective arrays.

Then traverse the remaining elements one by one.

For every element, compare:

```text
last element of arr1
        with
last element of arr2
```

If:

```text
arr1.last > arr2.last
```

add the element to `arr1`.

Otherwise, add it to `arr2`.

After processing all elements, append `arr2` to `arr1`.

## Algorithm

1. Put `nums[0]` into `arr1`.
2. Put `nums[1]` into `arr2`.
3. Start from the third element.
4. Compare the last elements of `arr1` and `arr2`.
5. If the last element of `arr1` is greater, add the current element to `arr1`.
6. Otherwise, add it to `arr2`.
7. Repeat until all elements are processed.
8. Append `arr2` after `arr1`.
9. Return the combined array.

## Example 2

```text
Input:
[5, 4, 3, 8]
```

Initially:

```text
arr1 = [5]
arr2 = [4]
```

Process `3`:

```text
5 > 4
```

So:

```text
arr1 = [5, 3]
arr2 = [4]
```

Process `8`:

```text
3 > 4  → false
```

So:

```text
arr1 = [5, 3]
arr2 = [4, 8]
```

Combine:

```text
[5, 3] + [4, 8]
```

Final result:

```text
[5, 3, 4, 8]
```

## Key Idea

```text
First element → arr1
Second element → arr2

Remaining elements:
        ↓
Compare last elements
        ↓
arr1.last > arr2.last ?
       /          \
     Yes           No
      ↓             ↓
    arr1           arr2
```

Finally:

```text
arr1 + arr2
```

## Complexity

### Time Complexity

```text
O(n)
```

Every element is processed once.

### Space Complexity

```text
O(n)
```

The two arrays store all elements.

## Concepts Used

- Array
- Simulation
- Comparison
- Traversal
- Dynamic Arrays
- Array Concatenation