#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int counter;
        for (int i = 0; i < n; i++) {
            counter = 0;
            for (int j = 0; j < n; j++) {
                if (i != j && nums[i] > nums[j]) {
                    counter++;
                }
            }
            result[i] = counter;
        }
        return result;
    }
};

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};

    Solution obj;
    vector<int> result = obj.smallerNumbersThanCurrent(nums);

    cout << "Counts of smaller numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Time: O(n^2)
// Space: O(n)
