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
}
}
