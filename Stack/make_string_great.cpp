#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string result;
        
        for (char c : s) {
            if (!result.empty() && abs(c - result.back()) == 32) {
                result.pop_back(); 
            } else {
                result.push_back(c); 
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;

    string s = "leEeetcode";
    string modifiedString = sol.makeGood(s);

    cout << "Modified String: " << modifiedString << endl;

    return 0;
}
// Time: O(n)
// Space: O(n)
