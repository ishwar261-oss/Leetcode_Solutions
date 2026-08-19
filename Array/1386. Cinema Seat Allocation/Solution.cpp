class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        int ans = 2 * n;

        sort(reservedSeats.begin(), reservedSeats.end());

        int i = 0;

        while (i < reservedSeats.size()) {

            int row = reservedSeats[i][0];

            bool left = true;
            bool right = true;

            while (i < reservedSeats.size() &&
                   reservedSeats[i][0] == row) {

                int seat = reservedSeats[i][1];

                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 6 && seat <= 9)
                    right = false;

                i++;
            }

            if (left && right) {
                continue;
            }

            if (left || right) {
                ans--;
            }

            else {

                bool middle = true;  

                int j = i - 1;

                while (j >= 0 && reservedSeats[j][0] == row) {

                    int seat = reservedSeats[j][1];

                    if (seat >= 4 && seat <= 7)
                        middle = false;

                    j--;
                }

                if (middle)
                    ans--;

                else
                    ans -= 2;
            }
        }
        return ans;
    }
};