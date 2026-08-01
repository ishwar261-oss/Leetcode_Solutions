#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> &nums, int target) {

    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }

    return {};
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;

    vector<int> ans = TwoSum(nums, target);

    if (ans.size() == 2)
        cout << "Indices of number : " << ans[0] << " " << ans[1];
    else
        cout << "No Pairs Found..!";

    return 0;
}