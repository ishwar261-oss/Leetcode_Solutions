#include<iostream>
#include<vector>
    using namespace std;
//Brute Force Approach Time Complexiy O(n^2)
vector<int>smallerThanCurr(vector<int>& nums){
   int n = nums.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] < nums[i])  count+=1;
        }
        ans[i] = count;
    }
    return ans;
}


int main(){

    vector<int> nums = {1,2,3,4,5};
    vector<int>ans = smallerThanCurr(nums);
    cout<<"Numbers Smaller than Current Number : ";
 
    for(int i = 0; i < ans.size(); i+=1){
         cout<<nums[i]<<" : "<<ans[i]<<", ";
    }
    return 0;
}
/*

//Optimal Solution (Sorting) Time Complexity: O(n log n)
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());
    unordered_map<int, int> mp;

    for (int i = 0; i < sorted.size(); i++) {
        if (mp.find(sorted[i]) == mp.end())  mp[sorted[i]] = i;
    }
    vector<int> ans;
    for (int num : nums)
        ans.push_back(mp[num]);
    return ans;
}
int main() {

    vector<int> nums = {8,1,2,2,3};
    vector<int> ans = smallerNumbersThanCurrent(nums);
    for (int x : ans) cout << x << " ";
    return 0;
}
    */
