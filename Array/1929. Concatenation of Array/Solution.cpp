#include<iostream>
#include<vector>
    using namespace std;

vector<int> ConcatenanteArray(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(2 * n);
    for(int i = 0; i < n; i+=1){
        ans[i] = nums[i];
        ans[i + 1] = nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans = ConcatenanteArray(nums);
    cout<<"The Orignal Array is: ";
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<"\nThe Concatenated Array is: ";
    for(int i = 0; i < ans.size(); i+=1){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
