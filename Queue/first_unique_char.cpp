#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> charCount(26, 0);

        for (char c : s) {
            charCount[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (charCount[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; 
    }
};

int main() {
    Solution sol;

    string input = "leetcode";
    int index = sol.firstUniqChar(input);

    cout << "First Unique Character Index: " << index << endl;

    return 0;
}

// Time: O(n)
// Space: O(1)