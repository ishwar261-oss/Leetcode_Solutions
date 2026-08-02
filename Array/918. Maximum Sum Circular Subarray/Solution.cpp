<<<<<<< HEAD
#include<iostream>
#include<vector>
    using  namespace std;

int maxSuminCircularArray(vector<int> &nums){

        int totalSum = 0;
        int currMax = 0, maxSum = nums[0];
        int currMin = 0, minSum = nums[0];

        for(auto num : nums){

            currMax = max(currMax + num, num);
            maxSum = max(maxSum, currMax);
            
            currMin = min(currMin + num, num);
            minSum = min(minSum, currMin);

            totalSum += num;
        }

        if(maxSum < 0) return maxSum;

        return max(maxSum, totalSum - minSum);

}
int main(){

    vector<int>nums = {1,-2,3,-2};
    int ans = maxSuminCircularArray(nums);
    cout<<ans;
    return 0;
=======
#include<iostream>
#include<vector>
    using  namespace std;

int maxSuminCircularArray(vector<int> &nums){

        int totalSum = 0;
        int currMax = 0, maxSum = nums[0];
        int currMin = 0, minSum = nums[0];

        for(auto num : nums){

            currMax = max(currMax + num, num);
            maxSum = max(maxSum, currMax);
            
            currMin = min(currMin + num, num);
            minSum = min(minSum, currMin);

            totalSum += num;
        }

        if(maxSum < 0) return maxSum;

        return max(maxSum, totalSum - minSum);

}
int main(){

    vector<int>nums = {1,-2,3,-2};
    int ans = maxSuminCircularArray(nums);
    cout<<ans;
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}