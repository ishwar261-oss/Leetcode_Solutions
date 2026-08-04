<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int unique = 0;
    for (int x : nums)
        unique ^= x;

    return unique;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums);
    return 0;
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int unique = 0;
    for (int x : nums)
        unique ^= x;

    return unique;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums);
    return 0;
<<<<<<< HEAD
}
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
