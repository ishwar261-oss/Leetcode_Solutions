#include <iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {

            int num = n;
            int product = 1;

            while (num > 0) {
                product *= (num % 10);
                num /= 10;
            }

            if (product % t == 0)
                return n;

            n++;
        }
    }
};

int main() {

    int n, t;
    cin >> n >> t;

    Solution obj;

    cout << obj.smallestNumber(n, t);

    return 0;
}
