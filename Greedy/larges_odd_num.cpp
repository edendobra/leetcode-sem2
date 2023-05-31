#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};

int main() {
    string num = "1234567890";

    Solution obj;
    string largestOdd = obj.largestOddNumber(num);

    cout << "The largest odd number is: " << largestOdd << endl;

    return 0;
}
// Time: O(n)
// Space: O(1)