#include<iostream>
#include<vector>
    using namespace std;

vector<int> setMissmatch(vector<int> &nums){
    int n = nums.size();
    int duplicate = -1, missing = -1;

    for(int i = 0; i < n; i+=1){
        int index = abs(nums[i]) -1;
        if(nums[index] < 0) duplicate = abs(nums[i]);
        else nums[index] = -nums[i];
    }

    for(int num : nums){
        if(num > 0) missing = abs(num) + 1;
    }
    return {duplicate, missing};
}
int main(){

    vector<int> nums = {1,2,3,3,4};
    vector<int> ans = setMissmatch(nums);
    
    cout<<"Duplicate Number in Array : "<<ans[0]<<endl;
    cout<<"Missing Number in Array : "<<ans[1]<<endl;
r
    return 0;
#include<iostream>
#include<vector>
    using namespace std;

vector<int> setMissmatch(vector<int> &nums){
    int n = nums.size();
    int duplicate = -1, missing = -1;

    for(int i = 0; i < n; i+=1){
        int index = abs(nums[i]) -1;
        if(nums[index] < 0) duplicate = abs(nums[i]);
        else nums[index] = -nums[i];
    }

    for(int num : nums){
        if(num > 0) missing = abs(num) + 1;
    }
    return {duplicate, missing};
}
int main(){

    vector<int> nums = {1,2,3,3,4};
    vector<int> ans = setMissmatch(nums);
    
    cout<<"Duplicate Number in Array : "<<ans[0]<<endl;
    cout<<"Missing Number in Array : "<<ans[1]<<endl;
r
    return 0;
}
}
