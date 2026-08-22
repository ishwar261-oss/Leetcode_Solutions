# 3622. Check Divisibility by Digit Sum and Product

## Problem

Given a positive integer `n`, calculate:

- The **sum of its digits**
- The **product of its digits**

Then add them together.

Return `true` if `n` is divisible by this value; otherwise return `false`. :contentReference[oaicite:0]{index=0}

## Example

```text
Input:
n = 99

Output:
true
```

### Explanation

Digits of `99`:

```text
Sum = 9 + 9 = 18
Product = 9 × 9 = 81
```

Add them:

```text
18 + 81 = 99
```

Since:

```text
99 % 99 = 0
```

the answer is:

```text
true
```

## Another Example

```text
Input:
n = 23

Output:
false
```

```text
Sum = 2 + 3 = 5
Product = 2 × 3 = 6

5 + 6 = 11
```

Since:

```text
23 % 11 != 0
```

the answer is:

```text
false
```

## Approach

Process the number digit by digit.

Use:

```text
n % 10
```

to get the last digit.

Then:

```text
n /= 10
```

removes the last digit.

For every digit:

```text
sum += digit
product *= digit
```

After processing all digits, check:

```text
originalNumber % (sum + product) == 0
```

## Algorithm

1. Store the original value of `n`.
2. Initialize:
   ```text
   sum = 0
   product = 1
   ```
3. Extract each digit.
4. Add the digit to `sum`.
5. Multiply the digit with `product`.
6. Remove the processed digit.
7. Calculate:
   ```text
   sum + product
   ```
8. Check whether the original number is divisible by this value.
9. Return the result.

## Example Walkthrough

For:

```text
n = 123
```

Process the digits:

```text
1 → sum = 1, product = 1
2 → sum = 3, product = 2
3 → sum = 6, product = 6
```

Therefore:

```text
sum + product
= 6 + 6
= 12
```

Check:

```text
123 % 12 != 0
```

So:

```text
false
```

## Key Idea

```text
Number
   ↓
Extract digits
   ↓
 ┌───────────────┐
 ↓               ↓
Digit Sum     Digit Product
 ↓               ↓
 └───────┬───────┘
         ↓
    sum + product
         ↓
     n % value
         ↓
   true / false
```

## Complexity

### Time Complexity

```text
O(log n)
```

Each digit is processed once. :contentReference[oaicite:1]{index=1}

### Space Complexity

```text
O(1)
```

Only a few variables are used.

## Concepts Used

- Number Manipulation
- Digit Extraction
- Modulo Operator `%`
- Integer Division
- Digit Sum
- Digit Product
- Divisibility
- Simulation