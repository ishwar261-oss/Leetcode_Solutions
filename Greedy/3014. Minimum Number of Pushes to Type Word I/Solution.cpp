#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {

        int ans = 0;
        for (int i = 0; i < word.size(); i++)
            ans += (i / 8) + 1;
        return ans;
    }
};

int main() {

    string word;

    cout << "Enter a word : ";
    cin >> word;

    Solution obj;

    cout << "Minimum Required Pushes = " << obj.minimumPushes(word);

    return 0;
}
