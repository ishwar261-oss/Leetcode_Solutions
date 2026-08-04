<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}
int main() {
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> ans = shuffle(nums, n);
    for (int x : ans)
        cout << x << " ";
    return 0;
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}
int main() {
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> ans = shuffle(nums, n);
    for (int x : ans)
        cout << x << " ";
    return 0;
<<<<<<< HEAD
}
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
