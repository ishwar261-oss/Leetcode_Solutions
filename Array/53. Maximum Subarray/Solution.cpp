<<<<<<< HEAD
#include<iostream>
#include<vector>
    using namespace std;

//Brute Force Approach
int maxSubArraySum(vector<int>&nums){
    int n = nums.size();
    int maxSum = 0, currSum;
    for(int start = 0; start < n; start+=1){
         currSum = 0;
        for(int end = start; end < n; end+=1){
            currSum +=nums[end];
             maxSum = max(currSum,maxSum);
        }
    }
    return maxSum;
}

// Kadane's Algorithm
int maxSubArraysum(vector<int>&nums){
    int n = nums.size();
    int currSum = 0, maxSum = 0;
    for(int i = 0; i < n; i+=1){
        currSum += nums[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0)
            currSum = 0;
        
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maxSubArraysum(nums);
    cout<<"MAximum Subarray Sum : "<<ans<<endl;

    return 0;
=======
#include<iostream>
#include<vector>
    using namespace std;

//Brute Force Approach
int maxSubArraySum(vector<int>&nums){
    int n = nums.size();
    int maxSum = 0, currSum;
    for(int start = 0; start < n; start+=1){
         currSum = 0;
        for(int end = start; end < n; end+=1){
            currSum +=nums[end];
             maxSum = max(currSum,maxSum);
        }
    }
    return maxSum;
}

// Kadane's Algorithm
int maxSubArraysum(vector<int>&nums){
    int n = nums.size();
    int currSum = 0, maxSum = 0;
    for(int i = 0; i < n; i+=1){
        currSum += nums[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0)
            currSum = 0;
        
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maxSubArraysum(nums);
    cout<<"MAximum Subarray Sum : "<<ans<<endl;

    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}