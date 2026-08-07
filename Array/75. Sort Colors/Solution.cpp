#include<iostream>
#include<vector>
using namespace std;
class Solution{
public :
void sortColors(vector<int> &nums){
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){

        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid +=1;
            low +=1;
        }else if(nums[mid] == 1) mid +=1;
        else{
            swap(nums[mid], nums[high]);
            high -=1;
        }
    }
}
};
int main(){

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Solution obj;
    obj.sortColors(nums);

    for (int x : nums)
        cout << x << " ";

    return 0;
}