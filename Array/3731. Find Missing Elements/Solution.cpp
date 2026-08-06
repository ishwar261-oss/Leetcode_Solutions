class Solution {
public:
    
//Method 2: Linear Search (No Sorting)
vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        int Min = *min_element(nums.begin(), nums.end());
        int Max = *max_element(nums.begin(), nums.end());

        for (int i = Min + 1; i < Max; i++) {

            bool found = false;

            for (int x : nums) {
                if (x == i) {
                    found = true;
                    break;
                }
            }

            if (!found)
                ans.push_back(i);
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> present(n + 1, false);

        for (int x : nums)
            present[x] = true;

        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            if (!present[i])
                ans.push_back(i);
        }

        return ans;
    }
};
