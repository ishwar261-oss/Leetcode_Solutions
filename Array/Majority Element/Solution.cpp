<<<<<<< HEAD
#include<iostream>
#include<vector>
    using namespace std;

    // BruteForce Approach Time Complexity O(n^2)
int majorityElement(vector<int> &nums){
    int n = nums.size() /2;
    for(int i = 0; i < n*2; i+=1){
        int count = 0;
        for(int j = 0; j < n*2; j+=1){
            if(nums[j] == nums[i])
                count +=1;
        }
        if(count > n)
            return nums[i];
    }
    return -1;
}
// Obtimized Way Time Complexity O(n)
int MajorityElement(vector<int> &nums){
    int n = nums.size();
    int majEle = 0, count = 0;

    for(int num : nums){
        if(count == 0)
            majEle = num;

        if(majEle == num)
            count +=1;
        else count -=1;
    }

    return majEle;
}    
int main(){
    vector<int> nums = {1,2,2,3,4,4,4,4,4};
    int ansA = majorityElement(nums);
    int ansB = MajorityElement(nums);
    cout<<"Majority Element : "<<ansB<<endl;

    return 0;
}
=======
#include<iostream>
#include<vector>
    using namespace std;

    // BruteForce Approach Time Complexity O(n^2)
int majorityElement(vector<int> &nums){
    int n = nums.size() /2;
    for(int i = 0; i < n*2; i+=1){
        int count = 0;
        for(int j = 0; j < n*2; j+=1){
            if(nums[j] == nums[i]) count +=1;
        }
        if(count > n) return nums[i];
    }
    return -1;
}
// Obtimized Way Time Complexity O(n)
int MajorityElement(vector<int> &nums){
    int n = nums.size();
    int majEle = 0, count = 0;
    for(int num : nums){
        if(count == 0) majEle = num;
        if(majEle == num) count +=1;
        else count -=1;
    }
    return majEle;
}    
int main(){
    vector<int> nums = {1,2,2,3,4,4,4,4,4};
    int ansA = majorityElement(nums);
    int ansB = MajorityElement(nums);
    cout<<"Majority Element : "<<ansB<<endl;

    return 0;
}
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
