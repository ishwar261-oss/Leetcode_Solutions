<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int option2 = nums[0] * nums[1] * nums[n - 1];

        return max(option1, option2);
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int option2 = nums[0] * nums[1] * nums[n - 1];

        return max(option1, option2);
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
