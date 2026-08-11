# LeetCode 2996 — Smallest Missing Integer Greater Than Sequential Prefix Sum

## Problem

Given an array `nums`, find the **smallest integer** that:

1. Is greater than or equal to the sum of the longest sequential prefix.
2. Does not exist in the array.

A **sequential prefix** starts from the first element and continues as long as every next element is exactly `1` greater than the previous element.

---

## Example 1

### Input

```text
nums = [1, 2, 3, 2, 5]
```

The sequential prefix is:

```text
1 → 2 → 3
```

Because:

```text
2 = 1 + 1
3 = 2 + 1
```

But:

```text
2 != 3 + 1
```

So the prefix ends at `3`.

### Prefix Sum

```text
1 + 2 + 3 = 6
```

Now start checking from `6`.

```text
6 → not present
```

Therefore:

```text
Answer = 6
```

---

## Example 2

### Input

```text
nums = [3, 4, 5, 1, 12, 14, 13]
```

Sequential prefix:

```text
3 → 4 → 5
```

Sum:

```text
3 + 4 + 5 = 12
```

Now check:

```text
12 → present
13 → present
14 → present
15 → not present
```

Therefore:

```text
Answer = 15
```

---

## Approach

We use **two simple steps**.

### Step 1 — Find Sequential Prefix Sum

Start with:

```text
sum = nums[0]
```

For every next element:

```text
nums[i] == nums[i - 1] + 1
```

If this condition is true, add it to the sum.

Otherwise, stop.

---

### Step 2 — Find Missing Integer

Start from:

```text
ans = sum
```

Search the entire array using a simple loop.

If `ans` exists:

```text
ans++
```

Then search again.

Continue until we find a number that is not present.

---

## Why No Hashing or Set?

This solution does **not** use:

```cpp
unordered_set
set
map
unordered_map
```

Instead, we simply scan the array:

```cpp
for (int i = 0; i < n; i++) {
    if (nums[i] == ans) {
        found = true;
        break;
    }
}
```

This is a **brute-force linear search**.

---

## Algorithm

1. Set:
   ```text
   sum = nums[0]
   ```
2. Traverse the array from index `1`.
3. If:
   ```text
   nums[i] == nums[i - 1] + 1
   ```
   add `nums[i]` to `sum`.
4. Otherwise, stop.
5. Set:
   ```text
   ans = sum
   ```
6. Search for `ans` in the entire array.
7. If found, increment `ans`.
8. Repeat until `ans` is not found.
9. Return `ans`.

---

## C++ Code

```cpp
class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n = nums.size();

        // Find sequential prefix sum
        int sum = nums[0];

        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

        // Find smallest missing integer
        int ans = sum;

        while (true) {

            bool found = false;

            // Linear search
            for (int i = 0; i < n; i++) {

                if (nums[i] == ans) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return ans;
            }

            ans++;
        }
    }
};
```

---

## Dry Run

Consider:

```text
nums = [3, 4, 5, 1, 12, 14, 13]
```

### Find Prefix

```text
sum = 3
```

`4` is sequential:

```text
3 + 1 = 4
sum = 7
```

`5` is sequential:

```text
4 + 1 = 5
sum = 12
```

Next:

```text
1 != 5 + 1
```

Stop.

So:

```text
sum = 12
```

### Find Missing Number

Check `12`:

```text
12 exists
```

Check `13`:

```text
13 exists
```

Check `14`:

```text
14 exists
```

Check `15`:

```text
15 does not exist
```

Therefore:

```text
answer = 15
```

---

## Complexity

### Time Complexity

The prefix calculation takes:

```text
O(n)
```

For every candidate, we may scan the entire array.

Worst case:

```text
O(n²)
```

### Space Complexity

```text
O(1)
```

No extra set, map, or array is used.

---

## Concepts Used

- Arrays
- Sequential Prefix
- Prefix Sum
- Linear Search
- Brute Force

---

## Key Idea

First find:

```text
Longest Sequential Prefix
        ↓
      Sum
        ↓
Start checking from Sum
        ↓
Find first number NOT in array
```

The important condition for the sequential prefix is:

```cpp
nums[i] == nums[i - 1] + 1
```

---

## Tags

`Array` `Prefix Sum` `Linear Search` `Brute Force` `Easy`