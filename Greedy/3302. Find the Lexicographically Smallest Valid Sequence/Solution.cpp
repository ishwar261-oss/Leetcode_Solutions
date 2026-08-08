#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        vector<int> last(m, -1);
        int i = n - 1;
        int j = m - 1;

        while (i >= 0 && j >= 0) {
            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
            i--;
        }
        vector<int> ans;
        i = 0;
        j = 0;

        bool changed = false;

        while (i < n && j < m) {

           if (word1[i] == word2[j]) {

                ans.push_back(i);
                j++;
                i++;
            }
        else if (!changed &&
                     (j == m - 1 || i < last[j + 1])) {

                ans.push_back(i);

                changed = true;
                j++;
                i++;
            }
         else i++;
            
        }
       if (j == m) return ans;

        return {};
    }
};

int main() {

    string word1, word2;
    cin >> word1;
    cin >> word2;
    Solution obj;
    vector<int> ans = obj.validSequence(word1, word2);
    for (int x : ans)
        cout << x << " ";

    return 0;
}