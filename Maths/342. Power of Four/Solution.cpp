<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    bool isPowerOfFour(int n) {

        if (n <= 0)
            return false;

        while (n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    bool isPowerOfFour(int n) {

        if (n <= 0)
            return false;

        while (n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
