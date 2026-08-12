/*
==== This it's not accepted on Leetcode ======
==== Due to time complexity [MLE], so use map instead of freq array ====
*/
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int mx = *max_element(nums.begin(), nums.end());
        vector<int> freq(mx + 1, 0);
        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            freq[nums[right]]++;

            while (freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};