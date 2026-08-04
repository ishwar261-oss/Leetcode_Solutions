<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        int n = nums.size();

        if (n < 3)
            return n;

        int power = 1;

        while (power <= n)
            power <<= 1;

        return power;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        int n = nums.size();

        if (n < 3)
            return n;

        int power = 1;

        while (power <= n)
            power <<= 1;

        return power;
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
