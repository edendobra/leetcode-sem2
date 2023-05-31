#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (char letter : letters) {
            if (letter > target) {
                return letter;
            }
        }
        
        return letters[0];
    }
};

int main() {
    vector<char> letters = {'a', 'c', 'e', 'g'};
    char target = 'd';

    Solution obj;

    char result = obj.nextGreatestLetter(letters, target);

    cout << "Next greatest letter: " << result << endl;

    return 0;
}

// Space: O(1)
// Time: O(n)
