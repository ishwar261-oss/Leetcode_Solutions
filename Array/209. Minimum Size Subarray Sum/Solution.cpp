<<<<<<< HEAD
 #include<iostream>
 #include<vector>
 #include<climits>
 using namespace std;
 int minSubArrayLen(int target, vector<int>& nums) {
         
         int n = nums.size();
         int left = 0, sum = 0;
         int ans  = INT_MAX;

         for(int right = 0; right < n; right +=1){

            sum += nums[right];

            while(sum >= target){

                ans = min(ans, right - left + 1);
                sum -= nums[left];
                left+=1;
            }
         }
         return ans == INT_MAX ? 0 : ans;
    }

int main(){

    vector<int> nums = {10,20,30,40};
    int target = 60;
    int ans = minSubArrayLen(target, nums);
    cout << ans << endl;
    return 0;
=======
 #include<iostream>
 #include<vector>
 #include<climits>
 using namespace std;
 int minSubArrayLen(int target, vector<int>& nums) {
         
         int n = nums.size();
         int left = 0, sum = 0;
         int ans  = INT_MAX;

         for(int right = 0; right < n; right +=1){

            sum += nums[right];

            while(sum >= target){

                ans = min(ans, right - left + 1);
                sum -= nums[left];
                left+=1;
            }
         }
         return ans == INT_MAX ? 0 : ans;
    }

int main(){

    vector<int> nums = {10,20,30,40};
    int target = 60;
    int ans = minSubArrayLen(target, nums);
    cout << ans << endl;
    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}