<<<<<<< HEAD
=======
<<<<<<< HEAD
# 1464. Maximum Product of Two Elements in an Array

## Problem
Given an integer array `nums`, return the maximum value of:

`(nums[i] - 1) * (nums[j] - 1)`

where `i != j`.

---

## Approach
- Traverse the array once.
- Keep track of the largest (`max1`) and second largest (`max2`) elements.
- After the traversal, compute:
  ```
  (max1 - 1) * (max2 - 1)
  ```
- This avoids sorting and gives the optimal solution.

---

## Algorithm
1. Initialize `max1` and `max2` to `0`.
2. Iterate through each number in the array.
3. If the current number is greater than `max1`:
   - Update `max2 = max1`
   - Update `max1 = current number`
4. Otherwise, if it is greater than `max2`, update `max2`.
5. Return `(max1 - 1) * (max2 - 1)`.

---

## Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## C++ Solution

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;

        for (int num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 1464. Maximum Product of Two Elements in an Array

## Problem
Given an integer array `nums`, return the maximum value of:

`(nums[i] - 1) * (nums[j] - 1)`

where `i != j`.

---

## Approach
- Traverse the array once.
- Keep track of the largest (`max1`) and second largest (`max2`) elements.
- After the traversal, compute:
  ```
  (max1 - 1) * (max2 - 1)
  ```
- This avoids sorting and gives the optimal solution.

---

## Algorithm
1. Initialize `max1` and `max2` to `0`.
2. Iterate through each number in the array.
3. If the current number is greater than `max1`:
   - Update `max2 = max1`
   - Update `max1 = current number`
4. Otherwise, if it is greater than `max2`, update `max2`.
5. Return `(max1 - 1) * (max2 - 1)`.

---

## Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## C++ Solution

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;

        for (int num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};
<<<<<<< HEAD
```
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
```
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
