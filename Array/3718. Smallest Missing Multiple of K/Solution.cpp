// Given an integer array nums and an integer k, return the smallest positive multiple of k that is missing from nums.

// A multiple of k is any positive integer divisible by k.

#include<iostream>
#include<vector>
using namespace std;

int smallestMissingMultiple(vector<int> &nums, int k){
    int n = nums.size();
    int multiple = k;

    while(true){

        bool found = false;

        for(int i = 0; i < n; i++){
            if(nums[i] == multiple){
                found = true;
                break;
            }
        }

        if(!found) return multiple;

        multiple += k;
    }
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;
    int result = smallestMissingMultiple(nums, k);
    cout << "The smallest positive multiple of " << k << " that is missing from the array is: " << result << endl;
    return 0;
}