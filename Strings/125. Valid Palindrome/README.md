# 125. Valid Palindrome

## Problem

Given a string `s`, determine whether it is a palindrome after:

- Converting all uppercase letters to lowercase.
- Removing all characters that are not letters or digits.

A palindrome reads the same from left to right and right to left.

## Example

```text
Input:
s = "A man, a plan, a canal: Panama"

Output:
true
```

After removing spaces and punctuation and converting to lowercase:

```text
amanaplanacanalpanama
```

This reads the same in both directions.

## Another Example

```text
Input:
s = "race a car"

Output:
false
```

After cleaning:

```text
raceacar
```

It is not the same when reversed.

## Approach

Use two pointers:

```text
left  → start of string
right → end of string
```

Move both pointers toward the center.

Ignore characters that are not letters or digits.

For valid characters:

```text
lowercase(left) == lowercase(right)
```

If they are different, the string is not a palindrome.

If all matching characters are equal, it is a palindrome.

## Algorithm

1. Set `left = 0`.
2. Set `right = s.length() - 1`.
3. Move `left` forward while the character is not alphanumeric.
4. Move `right` backward while the character is not alphanumeric.
5. Compare the two characters ignoring case.
6. If they are different, return `false`.
7. Move both pointers toward the center.
8. If all characters match, return `true`.

## Key Idea

```text
        left →              ← right

        a m a n a p l a n a m a

            Compare both
                 ↓
             Same → Continue
             Different → false
```

Only letters and digits are considered.

## Important Functions

### Check Alphanumeric

```text
isalnum()
```

Checks whether a character is a letter or digit.

### Convert to Lowercase

```text
tolower()
```

Converts an uppercase character to lowercase.

## Complexity

### Time Complexity

```text
O(n)
```

Each character is processed at most once.

### Space Complexity

```text
O(1)
```

Only two pointers are used.

## Concepts Used

- Strings
- Two Pointers
- Palindrome
- Character Handling
- Alphanumeric Characters
- Case Conversion
- `isalnum()`
- `tolower()`