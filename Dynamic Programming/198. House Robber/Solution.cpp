<<<<<<< HEAD
#include<iostream>
#include<vector>
    using namespace std;

int rob(vector<int> &nums){
    int n = nums.size();

    if(n == 1) return nums[0];

    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);

    for(int i = 2; i < n; i+=1){

        int take = nums[i] + prev2;
        int skip = prev1;
        int curr = max(take, skip);

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
int main(){

    vector<int> nums = {2,7,9,3,1};
    int ans = rob(nums);
    cout<<ans;
    return 0;
=======
#include<iostream>
#include<vector>
    using namespace std;

int rob(vector<int> &nums){
    int n = nums.size();

    if(n == 1) return nums[0];

    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);

    for(int i = 2; i < n; i+=1){

        int take = nums[i] + prev2;
        int skip = prev1;
        int curr = max(take, skip);

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
int main(){

    vector<int> nums = {2,7,9,3,1};
    int ans = rob(nums);
    cout<<ans;
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}