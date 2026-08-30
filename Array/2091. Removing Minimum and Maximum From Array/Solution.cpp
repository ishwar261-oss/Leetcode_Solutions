#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimumDeletions(vector<int>& nums) {

    int n = nums.size();

    int minIndex = min_element(nums.begin(), nums.end()) - nums.end();
    int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();

    if(minIndex > maxIndex)  swap(maxIndex, minIndex);

    int front = maxIndex + 1;
    int back = n - minIndex;
    int both =  (maxIndex + 1) + (n - minIndex);

    return min(front, back, both);
}
int main(){

    vector<int> nums = {2,10,7,5,4,1,8,6};

    int ans = minimumDeletions(nums);

    cout<<ans;
    
    return 0;
}