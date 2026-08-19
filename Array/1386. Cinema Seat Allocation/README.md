# 1386. Cinema Seat Allocation

## Problem

A cinema has `n` rows, and each row contains seats numbered from `1` to `10`.

A family of 4 people can sit together in one of these groups:

```text
2 3 4 5
```

```text
4 5 6 7
```

```text
6 7 8 9
```

Some seats are already reserved.

Find the **maximum number of families** that can be seated.

## Example

```text
Input:
n = 3

reservedSeats =
[
    [1, 2],
    [1, 3],
    [1, 8],
    [2, 6]
]
```

Initially, every row can accommodate 2 families:

```text
2 × n = 2 × 3 = 6
```

After considering the reserved seats, some family groups become unavailable.

The goal is to find the maximum number of families that can still be seated.

## Approach

Initially assume that every row can accommodate **2 families**.

```text
ans = 2 × n
```

Sort the reserved seats so that all reservations belonging to the same row are together.

For every row, check these three possible family groups:

```text
Left:
2 3 4 5
```

```text
Middle:
4 5 6 7
```

```text
Right:
6 7 8 9
```

### Case 1: Left and Right are Available

If both groups are free:

```text
2 3 4 5
6 7 8 9
```

the row can accommodate 2 families.

The initial count is already correct.

```text
ans remains unchanged
```

### Case 2: Only One Side is Available

If either the left or right group is available, only 1 family can be placed.

Since we initially counted 2 families:

```text
ans--
```

### Case 3: Neither Left nor Right is Available

Now check the middle group:

```text
4 5 6 7
```

If the middle group is available, one family can still be placed:

```text
ans--
```

If the middle group is also blocked, no family can be placed:

```text
ans -= 2
```

## Algorithm

1. Initialize:
   ```text
   ans = 2 × n
   ```
2. Sort `reservedSeats`.
3. Process all reserved seats belonging to the same row.
4. Assume the left and right groups are available.
5. For every reserved seat:
   - If the seat is between `2` and `5`, block the left group.
   - If the seat is between `6` and `9`, block the right group.
6. If both left and right groups are available, keep 2 families.
7. If only one is available, decrease the answer by `1`.
8. If neither is available:
   - Check whether seats `4` to `7` are free.
   - If free, decrease the answer by `1`.
   - Otherwise, decrease the answer by `2`.
9. Return the final answer.

## Example

Consider a row with these reserved seats:

```text
[1, 2]
[1, 3]
[1, 8]
```

The row is:

```text
1 2 3 4 5 6 7 8 9 10
  X X       X
```

Left group:

```text
2 3 4 5
```

is blocked because seats `2` and `3` are reserved.

Right group:

```text
6 7 8 9
```

is blocked because seat `8` is reserved.

Now check the middle group:

```text
4 5 6 7
```

It is available.

Therefore, this row can still accommodate **1 family**.

## Seat Groups

```text
Seats:

1 2 3 4 5 6 7 8 9 10

  ┌─────────────┐
  │ 2 3 4 5     │
  └─────────────┘
       Left

        ┌─────────────┐
        │ 4 5 6 7     │
        └─────────────┘
             Middle

            ┌─────────────┐
            │ 6 7 8 9     │
            └─────────────┘
                 Right
```

Seats `1` and `10` cannot be part of a family group.

## Important Observation

Only seats from:

```text
2 to 9
```

can affect family placement.

Also, rows without any reserved seats can always accommodate:

```text
2 families
```

Therefore, we start with:

```text
2 × n
```

and only adjust the answer for rows that contain reservations.

## Complexity

Let `m` be the number of reserved seats.

### Sorting

```text
O(m log m)
```

### Traversal

```text
O(m)
```

### Overall

```text
Time Complexity: O(m log m)
Space Complexity: O(1)
```

excluding the space used internally by sorting.

## Key Idea

```text
Start with 2 families per row
          ↓
   Check reserved seats
          ↓
 ┌────────┴────────┐
 ↓                 ↓
Left + Right     Blocked
available
 ↓                 ↓
2 families      Check Middle
                    ↓
             1 family / 0
```

## Concepts Used

- Array
- 2D Array
- Sorting
- Traversal
- Boolean Flags
- Greedy Approach
- Interval Checking
- Seat Allocation