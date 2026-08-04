<<<<<<< HEAD
=======
<<<<<<< HEAD
class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.size();

        while (i < n && s[i] == ' ')
            i+=1;

        if (i < n && (s[i] == '+' || s[i] == '-'))
            i+=1;

        bool digit = false;
        bool dot = false;
        bool exponent = false;

        while (i < n) {
            if (isdigit(s[i])) {
                digit = true;
            }
            else if (s[i] == '.') {
                if (dot || exponent)
                    return false;
                dot = true;
            }
            else if (s[i] == 'e' || s[i] == 'E') {
                if (exponent || !digit)
                    return false;

                exponent = true;
                digit = false;

                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-'))
                    i+=1;
            }
            else if (s[i] == ' ') {
                while (i < n && s[i] == ' ')
                    i++;
                return i == n && digit;
            }
            else {
                return false;
            }
            i+=1;
        }
        return digit;
    }
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.size();

        while (i < n && s[i] == ' ')
            i+=1;

        if (i < n && (s[i] == '+' || s[i] == '-'))
            i+=1;

        bool digit = false;
        bool dot = false;
        bool exponent = false;

        while (i < n) {
            if (isdigit(s[i])) {
                digit = true;
            }
            else if (s[i] == '.') {
                if (dot || exponent)
                    return false;
                dot = true;
            }
            else if (s[i] == 'e' || s[i] == 'E') {
                if (exponent || !digit)
                    return false;

                exponent = true;
                digit = false;

                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-'))
                    i+=1;
            }
            else if (s[i] == ' ') {
                while (i < n && s[i] == ' ')
                    i++;
                return i == n && digit;
            }
            else {
                return false;
            }
            i+=1;
        }
        return digit;
    }
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
