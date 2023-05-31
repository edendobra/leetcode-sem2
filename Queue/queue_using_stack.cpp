#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> inputStack;
    stack<int> outputStack;

public:
    MyQueue() {
    }

    void push(int x) {
        inputStack.push(x);
    }

    int pop() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        int front = outputStack.top();
        outputStack.pop();
        return front;
    }

    int peek() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        return outputStack.top();
    }

    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};

int main() {
    MyQueue queue;

    queue.push(5);
    queue.push(3);
    queue.push(9);

    int poppedElement = queue.pop();
    cout << "Popped Element: " << poppedElement << endl;

    int frontElement = queue.peek();
    cout << "Front Element: " << frontElement << endl;

    bool isEmpty = queue.empty();
    cout << "Is Queue Empty? " << (isEmpty ? "Yes" : "No") << endl;

    return 0;
}


// Time: O(1)
// Space: O(n)