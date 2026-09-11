#include<iostream>
#include<vector>
#include<set>
using namespace std;

int totalNumbers(vector<int> &digits){
    set<int>nums;

    for(int i = 0; i < digits.size(); i++){
        for(int j = 0; j < digits.size(); j++){
            for(int k = 0; k < digits.size(); k++){

                if(i == j || i == k || j == k) continue;

                if(digits[i] == 0) continue;

                if(digits[k] % 2 != 0) continue;

                int num = digits[i] * 100
                        + digits[j] * 10
                        +digits[k];

                nums.insert(num);
            }
        }
    }
    return nums.size();
}
int main(){

    vector<int> digits = {2, 1, 3, 0};

    int ans = totalNumbers(digits);

    cout<<ans;

    return 0;
}