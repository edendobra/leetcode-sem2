#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 5;

    Solution obj;

    int result = obj.search(nums, target);

    cout << "Target found at index: " << result << endl;

    return 0;
}

// Time O(1), 
//Space O(log n)
