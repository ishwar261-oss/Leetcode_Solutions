
class Solution {
public:
    using ll = long long;

    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();

        const ll MOD1 = 1000000007;
        const ll MOD2 = 1000000009;
        const ll BASE1 = 100019;
        const ll BASE2 = 100043;

        vector<ll> pow1(n + 1, 1), pow2(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            pow1[i] = (pow1[i - 1] * BASE1) % MOD1;
            pow2[i] = (pow2[i - 1] * BASE2) % MOD2;
        }

        auto check = [&](int len) {
            unordered_map<ll, int> freq;

            ll h1 = 0, h2 = 0;

            // Calculate hash of first window
            for (int i = 0; i < len; i++) {
                h1 = (h1 * BASE1 + nums[i]) % MOD1;
                h2 = (h2 * BASE2 + nums[i]) % MOD2;
            }

            auto getKey = [&]() {
                return (h1 << 32) | h2;
            };

            freq[getKey()]++;

            // Slide the window
            for (int i = len; i < n; i++) {
                h1 = (h1 * BASE1 + nums[i]
                    - (nums[i - len] * pow1[len]) % MOD1
                    + MOD1) % MOD1;

                h2 = (h2 * BASE2 + nums[i]
                    - (nums[i - len] * pow2[len]) % MOD2
                    + MOD2) % MOD2;

                freq[getKey()]++;
            }

            for (auto& p : freq) {
                if (p.second == 1)
                    return true;
            }

            return false;
        };

        int low = 1, high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (check(mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
