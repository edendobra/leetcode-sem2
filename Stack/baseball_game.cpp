#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> steku;
    
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                steku.pop();
            } else if (operations[i] == "D") {
                steku.push(steku.top() * 2);
            } else if (operations[i] == "+") {
                int temp = steku.top();
                steku.pop();
                int sum = temp + steku.top();
                steku.push(temp);
                steku.push(sum);
            } else {
                steku.push(stoi(operations[i]));
            }
        }
        
        int sum = 0;
        while (!steku.empty()) {
            sum += steku.top();
            steku.pop();
        }
        
        return sum;
    }
};

int main() {
    Solution sol;

    vector<string> operations = {"5", "2", "C", "D", "+"};
    int totalPoints = sol.calPoints(operations);

    cout << "Total Points: " << totalPoints << endl;

    return 0;
}
// Time: O(n)
// Space: O(n)