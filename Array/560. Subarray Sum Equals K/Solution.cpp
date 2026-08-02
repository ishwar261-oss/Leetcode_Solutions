#include<iostream>
#include<vector>
    using namespace std;

int sumEqualK(vector<int>&nums,int k){
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i += 1){
        int sum = 0;

    }
    return count;
}    
int main(){

    vector<int> nums = {1,1,1};
    int k = 2;
    int ans = sumEqualK(nums, k);

    cout<<"Number of Subarray : "<<ans<<endl;
    
    return 0;
}
