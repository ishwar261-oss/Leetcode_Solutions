# 1111. Maximum Nesting Depth of Two Valid Parentheses Strings

## Problem

Given a valid parentheses string `seq`, split it into two valid parentheses strings `A` and `B` such that the maximum nesting depth of the two strings is minimized.

Return an array `answer` where:

- `answer[i] = 0` means `seq[i]` belongs to string `A`.
- `answer[i] = 1` means `seq[i]` belongs to string `B`.

## Approach

We divide the parentheses between the two groups based on the current nesting depth.

The main idea is:

- Keep track of the current `depth`.
- For every `'('`, increase the depth first.
- Assign the parenthesis to:
  - Group `0` when the depth is even.
  - Group `1` when the depth is odd.
- For every `')'`, use the current depth to decide its group, then decrease the depth.

This distributes nested parentheses between the two strings and keeps their maximum depths balanced.

## Example

Input:

`seq = "(()())"`

Depth changes:

`1 2 1 2 1 0`

Assignments:

`1 0 0 0 0 0`

Output:

`[1,0,0,0,0,0]`

Both resulting strings are valid and their nesting depths are minimized.

## Algorithm

1. Initialize `depth = 0`.
2. Traverse the string character by character.
3. If the character is `'('`:
   - Increase `depth`.
   - Assign `depth % 2` to the current position.
4. If the character is `')'`:
   - Assign `depth % 2` to the current position.
   - Decrease `depth`.
5. Return the resulting array.

## Key Idea

Use the **parity of the nesting depth** to alternate parentheses between the two groups.

- Even depth → group `0`
- Odd depth → group `1`

This prevents one group from containing all nested parentheses.

## Complexity

### Time Complexity

O(n)

We traverse the string once.

### Space Complexity

O(n)

The answer array contains one value for every character.

## Concepts Used

- Strings
- Parentheses
- Nesting Depth
- Greedy Approach
- Parity
- Traversal