#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int maxProduct = nums[n - 1] * nums[n - 2];
        int minProduct = nums[0] * nums[1];

        return maxProduct - minProduct;
    }
};

int main() {
    vector<int> nums = {4, 2, 5, 9, 7, 3};

    Solution obj;
    int result = obj.maxProductDifference(nums);

    cout << "Maximum Product Difference: " << result << endl;

    return 0;
}


// Time: O(n log n)
// Space: O(1)