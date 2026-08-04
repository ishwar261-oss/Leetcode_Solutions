<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n) {
            if (n & 1)  count++;
            n >>= 1;
        }

        return count;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n) {
            if (n & 1)  count++;
            n >>= 1;
        }

        return count;
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
