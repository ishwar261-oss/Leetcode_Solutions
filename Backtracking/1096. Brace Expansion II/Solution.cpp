class Solution {
public:

    set<string> solve(string s) {

        set<string> result;

        // Find top-level comma
        int balance = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '{')
                balance++;

            else if(s[i] == '}')
                balance--;

            else if(s[i] == ',' && balance == 0) {

                set<string> left = solve(s.substr(0, i));
                set<string> right = solve(s.substr(i + 1));

                result.insert(left.begin(), left.end());
                result.insert(right.begin(), right.end());

                return result;
            }
        }

        // Remove outer braces
        if(s[0] == '{' && s.back() == '}') {

            balance = 0;
            bool isOuter = true;

            for(int i = 0; i < s.size(); i++) {

                if(s[i] == '{')
                    balance++;

                else if(s[i] == '}')
                    balance--;

                if(balance == 0 && i != s.size() - 1) {
                    isOuter = false;
                    break;
                }
            }

            if(isOuter)
                return solve(s.substr(1, s.size() - 2));
        }

        // Single lowercase letter
        if(s.size() == 1 && s[0] >= 'a' && s[0] <= 'z') {
            result.insert(s);
            return result;
        }

        // Concatenation
        vector<set<string>> parts;

        for(int i = 0; i < s.size();) {

            if(s[i] == '{') {

                balance = 0;
                int j = i;

                for(; j < s.size(); j++) {

                    if(s[j] == '{')
                        balance++;

                    else if(s[j] == '}')
                        balance--;

                    if(balance == 0)
                        break;
                }

                parts.push_back(
                    solve(s.substr(i, j - i + 1))
                );

                i = j + 1;

            } else {

                parts.push_back(
                    solve(string(1, s[i]))
                );

                i++;
            }
        }

        // Cartesian product
        result.insert("");

        for(auto &part : parts) {

            set<string> temp;

            for(auto &a : result) {
                for(auto &b : part) {
                    temp.insert(a + b);
                }
            }

            result = temp;
        }

        return result;
    }

    vector<string> braceExpansionII(string expression) {

        set<string> result = solve(expression);

        return vector<string>(result.begin(), result.end());
    }
};s