<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> lastIndex(256, -1);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }

            lastIndex[s[right]] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> lastIndex(256, -1);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }

            lastIndex[s[right]] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
<<<<<<< HEAD
};  
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};  
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
