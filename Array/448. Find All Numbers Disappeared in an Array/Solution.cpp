<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) nums[index] = -nums[index];
    }

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) ans.push_back(i + 1);       
    }
    return ans;
}
int main() {

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = findDisappearedNumbers(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
=======
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) nums[index] = -nums[index];
    }

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) ans.push_back(i + 1);       
    }
    return ans;
}
int main() {

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = findDisappearedNumbers(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}