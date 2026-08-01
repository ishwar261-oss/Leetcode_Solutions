<<<<<<< HEAD
#include<iostream>
#include<vector>
    using namespace std;

int maxConsecutiveOnes(vector<int> &nums){
    int n = nums.size();
    int count = 0; 
    int maxCount = 0;
    for(int num : nums){
        if(num == 1){
            count+=1;
            maxCount = max(count, maxCount);
        }
        else count = 0;
    }
    return maxCount;
}    

int main(){
    vector<int> nums = {1,1,1,0,0,1,0,1,0,1,1,1,1,0};
    int ans = maxConsecutiveOnes(nums);
    cout<<"Maximum consecutive ones: " << ans << endl;
    return 0;
=======
#include<iostream>
#include<vector>
    using namespace std;

int maxConsecutiveOnes(vector<int> &nums){
    int n = nums.size();
    int count = 0; 
    int maxCount = 0;
    for(int num : nums){
        if(num == 1){
            count+=1;
            maxCount = max(count, maxCount);
        }
        else count = 0;
    }
    return maxCount;
}    

int main(){
    vector<int> nums = {1,1,1,0,0,1,0,1,0,1,1,1,1,0};
    int ans = maxConsecutiveOnes(nums);
    cout<<"Maximum consecutive ones: " << ans << endl;
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}