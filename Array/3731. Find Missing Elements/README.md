# Find Missing Elements

## Problem Statement
Given an array of integers, find all the missing numbers between the minimum and maximum elements of the array.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        if (nums.empty())
            return ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {

            // Skip duplicate elements
            if (nums[i] == nums[i + 1])
                continue;

            for (int j = nums[i] + 1; j < nums[i + 1]; j++) {
                ans.push_back(j);
            }
        }

        return ans;
    }
};
```

---

## Approach
1. Sort the array in ascending order.
2. Compare every pair of adjacent elements.
3. If the difference between two adjacent elements is greater than `1`, all numbers in between are missing.
4. Add the missing numbers to the answer vector.
5. Return the resulting vector.

---

## Algorithm
1. If the array is empty, return an empty vector.
2. Sort the array.
3. Traverse the sorted array.
4. Skip duplicate values.
5. For each adjacent pair, insert every integer between them into the answer vector.
6. Return the answer.

---

## Example

### Input
```text
nums = {4, 2, 7, 1}
```

### Sorted Array
```text
1 2 4 7
```

### Output
```text
3 5 6
```

---

## Time Complexity
- Sorting: **O(n log n)**
- Traversal: **O(n + k)**, where `k` is the number of missing elements.
- **Overall:** `O(n log n)`

## Space Complexity
- **Auxiliary Space:** `O(1)` (excluding the output vector)
- **Output Space:** `O(k)`