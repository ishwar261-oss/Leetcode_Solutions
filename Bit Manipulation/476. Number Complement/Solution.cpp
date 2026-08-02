class Solution {
public:
    int findComplement(int num) {

        long long mask = 1;

        while (mask <= num) {
            mask <<= 1;
        }

        return num ^ (mask - 1);
    }

    int findComplementOptimal(int num) {
        int mask = num;
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;

        return mask ^ num;
    }
};

int main() {
    Solution sol;
    cout << sol.findComplement(5) << endl;
    cout << sol.findComplementOptimal(5) << endl;
    return 0;
}
