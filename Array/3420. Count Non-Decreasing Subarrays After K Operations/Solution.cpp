class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        deque<pair<int, int>> dq;
        long long cost = 0;
        long long ans = 0;

        int right = n - 1;

        for (int left = n - 1; left >= 0; left--) {
            int value = nums[left];
            int count = 1;

            // Merge smaller values into the current larger value
            while (!dq.empty() && dq.back().first < value) {
                int smallerValue = dq.back().first;
                int smallerCount = dq.back().second;

                dq.pop_back();

                count += smallerCount;
                cost += 1LL * (value - smallerValue) * smallerCount;
            }

            dq.push_back({value, count});

            // Shrink the window if operations exceed k
            while (cost > k) {
                int currentValue = dq.front().first;

                cost -= currentValue - nums[right];

                if (dq.front().second > 1) {
                    dq.front().second--;
                } else {
                    dq.pop_front();
                }

                right--;
            }

            // All subarrays [left...right], [left...right-1], ...
            // are valid.
            ans += right - left + 1;
        }

        return ans;
    }
};