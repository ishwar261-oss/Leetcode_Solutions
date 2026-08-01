<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        profit = max(profit, prices[i] - minPrice);
    }
    return profit;
}

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);

    return 0;
=======
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        profit = max(profit, prices[i] - minPrice);
    }
    return profit;
}

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);

    return 0;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}