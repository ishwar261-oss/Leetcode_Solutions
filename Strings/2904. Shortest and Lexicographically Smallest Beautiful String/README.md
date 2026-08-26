# 2904. Shortest and Lexicographically Smallest Beautiful String

## Problem

Given a binary string `s` and an integer `k`, find the **shortest beautiful substring** of `s`.

A substring is called **beautiful** if it contains exactly `k` occurrences of `1`.

If multiple beautiful substrings have the same minimum length, return the **lexicographically smallest** one.

If no such substring exists, return an empty string.

## Example

```text
Input:
s = "100011001"
k = 3

Output:
"11001"
```

The substring contains exactly three `1`s and is the shortest possible.

## Approach

Use the **sliding window / two-pointer** technique.

We need exactly `k` ones.

Maintain:

```text
left
right
count
```

where `count` represents the number of `1`s in the current window.

### Steps

1. Move `right` through the string.
2. Whenever `s[right] == '1'`, increase `count`.
3. When `count == k`, the current window contains exactly `k` ones.
4. Remove unnecessary zeros from the left to make the substring as short as possible.
5. Compare it with the best answer found so far.
6. Continue searching for another possible substring.

## Why Remove Zeros?

Suppose we have:

```text
00011001000
```

and need `3` ones.

Zeros at the beginning and end do not help us reach `k` ones.

Removing unnecessary zeros gives the shortest substring containing exactly `k` ones.

## Lexicographical Order

If two substrings have the same length, choose the lexicographically smaller one.

For example:

```text
"00111"
"01110"
```

Both have the same length, but:

```text
"00111" < "01110"
```

so `"00111"` is preferred.

## Algorithm

```text
left = 0
count = 0
answer = ""

for right from 0 to n-1:

    if s[right] == '1':
        count++

    while count > k:
        if s[left] == '1':
            count--
        left++

    if count == k:
        remove unnecessary zeros from left

        current = s[left ... right]

        if current is shorter:
            answer = current

        else if same length and current is smaller:
            answer = current
```

## Example

```text
s = "101101"
k = 2
```

Possible substrings containing exactly two `1`s include:

```text
"10"
"01"
"11"
"101"
```

The shortest length is `2`.

Among valid substrings of length `2`:

```text
"10"
"11"
```

The lexicographically smaller one is:

```text
"10"
```

## Key Idea

The problem has two requirements:

```text
1. Exactly k ones
2. Minimum length
```

If multiple substrings have the same minimum length:

```text
Choose lexicographically smallest
```

So the priority is:

```text
Minimum Length
      ↓
Lexicographically Smallest
```

## Complexity

### Time Complexity

```text
O(n)
```

Each character is processed by the sliding window at most a constant number of times.

### Space Complexity

```text
O(1)
```

Apart from the returned substring.

## Concepts Used

- Strings
- Sliding Window
- Two Pointers
- Greedy
- Substrings
- Lexicographical Comparison
- Counting