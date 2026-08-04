<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {

        vector<string> ans;

        for (int h = 0; h < 12; h++) {

            for (int m = 0; m < 60; m++) {

                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {

                    string time = to_string(h) + ":";

                    if (m < 10)
                        time += "0";

                    time += to_string(m);

                    ans.push_back(time);
                }
            }
        }

        return ans;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {

        vector<string> ans;

        for (int h = 0; h < 12; h++) {

            for (int m = 0; m < 60; m++) {

                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {

                    string time = to_string(h) + ":";

                    if (m < 10)
                        time += "0";

                    time += to_string(m);

                    ans.push_back(time);
                }
            }
        }

        return ans;
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
