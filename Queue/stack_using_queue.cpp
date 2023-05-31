#include <iostream>
#include <queue>

using namespace std;

class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
    int topElement;

public:
    MyStack() {
    }

    void push(int x) {
        q1.push(x);
        topElement = x;
    }

    int pop() {
        while (q1.size() > 1) {
            topElement = q1.front();
            q2.push(topElement);
            q1.pop();
        }

        int popped = q1.front();
        q1.pop();

        swap(q1, q2);

        return popped;
    }

    int top() {
        return topElement;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack stack;

    stack.push(5);
    stack.push(3);
    stack.push(9);

    int poppedElement = stack.pop();
    cout << "Popped Element: " << poppedElement << endl;

    int topElement = stack.top();
    cout << "Top Element: " << topElement << endl;

//nese eshte bosh
    bool isEmpty = stack.empty();
    cout << "Is Stack Empty? " << (isEmpty ? "Yes" : "No") << endl;

    return 0;
}


// Time: O(1)
// Space: O(n)