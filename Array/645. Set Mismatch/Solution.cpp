<<<<<<< HEAD
=======
<<<<<<< HEAD
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
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
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
<<<<<<< HEAD
}
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
