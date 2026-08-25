# 1910. Remove All Occurrences of a Substring

## Problem

Given two strings `s` and `part`, repeatedly remove the **leftmost occurrence** of `part` from `s` until `part` no longer exists.

Return the resulting string.

## Example

```text
Input:
s = "daabcbaabcbc"
part = "abc"

Output:
"dab"
```

## Explanation

Start with:

```text
daabcbaabcbc
```

Remove the first `"abc"`:

```text
daabcbc
```

Remove `"abc"` again:

```text
dabc
```

Remove `"abc"` again:

```text
d
```

So the final result is:

```text
"dab"
```

## Approach

Use the `find()` function to locate the first occurrence of `part`.

Whenever it is found:

1. Get its starting position.
2. Remove `part` from that position.
3. Continue searching.

Stop when `part` is no longer present.

## Example Walkthrough

```text
s = "axxxxyyyyb"
part = "xy"
```

Find:

```text
axxxxyyyyb
    ↑
   "xy"
```

Remove it repeatedly until no `"xy"` remains.

The process continues until the substring cannot be found.

## Key Idea

```text
String
   ↓
Find part
   ↓
Found?
 ┌───┴───┐
Yes      No
 ↓        ↓
Remove   Stop
 ↓
Search again
```

The important point is that after removing a substring, **new occurrences can be created**, so we continue searching until none remain.

## Complexity

### Time Complexity

```text
O(n²)
```

In the worst case, multiple removals and string operations may require repeated work.

### Space Complexity

```text
O(n)
```

The resulting string requires additional storage.

## Concepts Used

- Strings
- Substrings
- `find()`
- String Erasing
- Repeated Removal
- Simulation