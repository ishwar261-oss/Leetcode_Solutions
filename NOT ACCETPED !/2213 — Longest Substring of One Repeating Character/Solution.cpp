
/*
================= TLE (12/28 Test Cases) =================
Time Complexity: O(Q * N)
Space Complexity: O(1)
*/


class Solution {
public:
    vector<int> longestRepeating(string s,
                                 string queryCharacters,
                                 vector<int>& queryIndices) {

        vector<int> ans;

        for (int q = 0; q < queryIndices.size(); q++) {

            s[queryIndices[q]] = queryCharacters[q];

            int best = 1;
            int current = 1;

            for (int i = 1; i < s.size(); i++) {

                if (s[i] == s[i - 1]) current++;
                else  current = 1;
            
                best = max(best, current);
            }

            ans.push_back(best);
        }

        return ans;
    }
};