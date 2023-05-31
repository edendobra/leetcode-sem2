#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int num : aliceSizes) {
            sumA += num;
        }
        for (int num : bobSizes) {
            sumB += num;
        }

        int target = (sumA - sumB) / 2;
        for (int num : aliceSizes) {
            int complement = num - target;
            for (int numB : bobSizes) {
                if (numB == complement) {
                    return { num, numB };
                }
            }
        }

        return {}; 
    }
};

int main() {
    vector<int> aliceSizes = {1, 2, 5};
    vector<int> bobSizes = {2, 4};

    Solution obj;

    vector<int> result = obj.fairCandySwap(aliceSizes, bobSizes);

    cout << "Fair candy swap: " << result[0] << ", " << result[1] << endl;

    return 0;
}
//Time complexity: O(m * n)
// Space complexity: O(1)