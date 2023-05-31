#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        delete nextNode;
    }
};

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Solution obj;
    obj.deleteNode(node2);

    ListNode* current = node1;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    delete node1;
    delete node3;
    delete node4;

    return 0;
}


// Space: O(1)
// Time: O(1)