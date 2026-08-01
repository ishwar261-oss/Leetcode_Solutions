<<<<<<< HEAD
#include<iostream>
#include<vector>
    using namespace std;

int sumDivisibleByK(vector<int> &nums, int k){
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i+=1){
        int sum = 0;
        for(int j = i; j < n; j+=1){
            sum += nums[j];
            if((sum / k) * k == sum)   count += 1;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = sumDivisibleByK(nums, k);

    cout<<"The number of subarrays with sum divisible by " << k << " is: " << ans << endl;
    return 0;
=======
#include<iostream>
#include<vector>
    using namespace std;

int sumDivisibleByK(vector<int> &nums, int k){
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i+=1){
        int sum = 0;
        for(int j = i; j < n; j+=1){
            sum += nums[j];
            if((sum / k) * k == sum)   count += 1;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = sumDivisibleByK(nums, k);

    cout<<"The number of subarrays with sum divisible by " << k << " is: " << ans << endl;
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}