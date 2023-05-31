#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        for (int i = 0; i < prices.size(); i++) {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            result.push_back(prices[i] - discount);
        }
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> finalPrices = sol.finalPrices(prices);

    cout << "Final Prices: ";
    for (int price : finalPrices) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
// Space: O(n)
// Time: O(n^2)