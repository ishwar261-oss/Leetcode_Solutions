# 118. Pascal's Triangle

## Problem

Given an integer `numRows`, generate the first `numRows` rows of Pascal's Triangle.

In Pascal's Triangle:

- The first and last element of every row is `1`.
- Every middle element is the sum of the two elements directly above it.

## Approach

Build the triangle row by row.

For each row:

1. Create a row containing `1`s.
2. Keep the first and last elements as `1`.
3. Calculate each middle element using the previous row.

For a middle position `j`:

`current[j] = previous[j - 1] + previous[j]`

Add the completed row to the result.

## Example

Input:

`numRows = 5`

Output:

`[[1], [1,1], [1,2,1], [1,3,3,1], [1,4,6,4,1]]`

Explanation:

Each middle number is obtained by adding the two numbers directly above it.

## Algorithm

1. Create an empty result array.
2. Repeat for each row from `0` to `numRows - 1`.
3. Create a row containing `1`s.
4. For every middle position:
   - Add the two values from the previous row.
5. Add the current row to the result.
6. Return the complete triangle.

## Key Idea

Every value inside Pascal's Triangle is formed by adding the two values above it.

For example:

`3 + 3 = 6`

which produces the middle value in:

`[1, 4, 6, 4, 1]`

## Complexity

### Time Complexity

O(numRows²)

There are approximately `numRows² / 2` elements in the triangle.

### Space Complexity

O(numRows²)

The complete Pascal's Triangle is stored in the result.

## Concepts Used

- Arrays
- 2D Arrays
- Nested Loops
- Dynamic Array
- Previous Row
- Index Manipulation
- Pascal's Triangle