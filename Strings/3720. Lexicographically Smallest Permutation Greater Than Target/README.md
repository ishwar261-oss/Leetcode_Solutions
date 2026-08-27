# 3720. Lexicographically Smallest Permutation Greater Than Target

## Problem

Given two strings `s` and `target` of the same length, rearrange the characters of `s` to form the lexicographically smallest permutation that is strictly greater than `target`.

If no such permutation exists, return an empty string.

## Example

```text
Input:
s = "abc"
target = "abb"

Output:
"abc"
```

`abc` is greater than `abb` and is the smallest possible valid permutation.

## Approach

Use a frequency array of size `26`.

First, calculate the difference between the characters of `s` and `target`.

```text
cnt = characters of s - characters of target
```

Then process `target` from **right to left**.

At each position:

1. Restore the character currently used by `target`.
2. Check whether the prefix can be formed using the available characters.
3. Find the smallest available character greater than the current target character.
4. Replace that character.
5. Append all remaining characters in ascending order.

Processing from right to left ensures that we change the **latest possible position**, which gives the lexicographically smallest answer.

## Example

```text
s = "abc"
target = "abb"
```

We need a permutation greater than:

```text
abb
```

The last character is:

```text
b
```

There is a greater available character:

```text
c
```

Replace:

```text
abb
  ↓
abc
```

Therefore:

```text
Answer = "abc"
```

## Key Idea

To get the smallest permutation greater than `target`:

```text
Keep the prefix as small as possible
            ↓
Change the rightmost possible position
            ↓
Choose the smallest character greater than target[i]
            ↓
Put remaining characters in ascending order
```

## Why Right to Left?

Consider:

```text
target = "abb"
```

Changing the first character gives:

```text
c...
```

Changing the last possible character gives:

```text
abc
```

Since:

```text
abc < c...
```

we always try to make the change as far right as possible.

## Algorithm

```text
1. Count characters of s.
2. Subtract characters of target from the count.
3. Start from the last position of target.
4. Restore target[i] to the available characters.
5. Check whether the prefix can be formed.
6. Find the smallest character greater than target[i].
7. Replace target[i].
8. Append remaining characters in sorted order.
9. Return the result.
10. If no position works, return "".
```

## Helper Function

The remaining characters are placed in ascending order.

For example:

```text
cnt:
a → 2
c → 1
d → 2
```

The resulting string is:

```text
aacdd
```

This is the smallest possible arrangement of the remaining characters.

## Edge Case

If no permutation of `s` is strictly greater than `target`, return:

```text
""
```

For example:

```text
s = "abc"
target = "cba"
```

No permutation of `abc` is greater than `cba`.

## Complexity

### Time Complexity

```text
O(26 × n)
```

### Space Complexity

```text
O(n)
```

for storing the resulting string.

## Concepts Used

- Strings
- Permutations
- Frequency Array
- Greedy
- Lexicographical Order
- Right-to-Left Traversal
- Sorting