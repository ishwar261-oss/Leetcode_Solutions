# 867. Transpose Matrix

## Problem

Given a matrix, return its **transpose**.

The transpose of a matrix is obtained by changing its rows into columns and its columns into rows.

For a matrix:

```text
1 2 3
4 5 6
```

The transpose is:

```text
1 4
2 5
3 6
```

## Example

```text
Input:
[
    [1, 2, 3],
    [4, 5, 6]
]

Output:
[
    [1, 4],
    [2, 5],
    [3, 6]
]
```

## Approach

If the original matrix has:

```text
m rows
n columns
```

then the transposed matrix will have:

```text
n rows
m columns
```

For every element:

```text
matrix[i][j]
```

place it at:

```text
answer[j][i]
```

So rows become columns.

## Algorithm

1. Find the number of rows `m`.
2. Find the number of columns `n`.
3. Create a new matrix of size `n × m`.
4. Traverse every element of the original matrix.
5. Store:
   ```text
   answer[j][i] = matrix[i][j]
   ```
6. Return the new matrix.

## Example

Original matrix:

```text
1 2 3
4 5 6
```

Process each element:

```text
matrix[0][0] = 1 → answer[0][0]
matrix[0][1] = 2 → answer[1][0]
matrix[0][2] = 3 → answer[2][0]

matrix[1][0] = 4 → answer[0][1]
matrix[1][1] = 5 → answer[1][1]
matrix[1][2] = 6 → answer[2][1]
```

Result:

```text
1 4
2 5
3 6
```

## Key Idea

```text
Original:
matrix[i][j]

Transpose:
answer[j][i]
```

The row index and column index are simply swapped.

## Complexity

Let the matrix contain `m × n` elements.

**Time Complexity:**

```text
O(m × n)
```

Every element is visited once.

**Space Complexity:**

```text
O(m × n)
```

for the resulting transposed matrix.

## Concepts Used

- Matrix
- 2D Array
- Rows and Columns
- Matrix Transpose
- Nested Loops
- Index Swapping