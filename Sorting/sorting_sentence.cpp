#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word.clear();
            } else {
                word += c;
            }
        }
        words.push_back(word);

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[j].back() < words[i].back()) {
                    swap(words[i], words[j]);
                }
            }
        }

        string sortedSentence;
        for (const string& word : words) {
            sortedSentence += word.substr(0, word.length() - 1);
            sortedSentence += ' ';
        }
        sortedSentence.pop_back();

        return sortedSentence;
    }
};

int main() {
    string s = "is2 sentence4 This1 a3";

    Solution obj;
    string sorted = obj.sortSentence(s);

    cout << "Sorted sentence: " << sorted << endl;

    return 0;
}


// Time: O(n log n)
// Space: O(n)