#include <iostream>
#include <vector>
#include <string>
#include <stack> 
#include <queue>
#include <algorithm>
#include "functions.h"
using namespace std;


int main(){
// BINARY SEARCH ------------
//         vector<int> nums = {1, 3, 5, 7, 9};
//     int target = 5;

//     Solution obj;

//     int result = obj.search(nums, target);

//     cout << "Target found at index: " << result << endl;
// Fair Candy Swap ------------
//  vector<int> aliceSizes = {1, 2, 5};
//     vector<int> bobSizes = {2, 4};

//     Solution obj;

//     vector<int> result = obj.fairCandySwap(aliceSizes, bobSizes);

//     cout << "Fair candy swap: " << result[0] << ", " << result[1] << endl;
// Find Smallest Letter ------------
    // vector<char> letters = {'a', 'c', 'e', 'g'};
    // char target = 'd';

    // Solution obj;

    // char result = obj.nextGreatestLetter(letters, target);

    // cout << "Next greatest letter: " << result << endl;
// Array Partition ------------
//    vector<int> nums = {1, 4, 3, 2};

//     Solution obj;
//     int sum = obj.arrayPairSum(nums);

//     cout << "The sum of min pairs is: " << sum << endl;
// Largest Odd Number ------------
//   string num = "1234567890";

//     Solution obj;
//     string largestOdd = obj.largestOddNumber(num);

//     cout << "The largest odd number is: " << largestOdd << endl;
// Maximum 6 and 9's
//  int num = 9669;

//     Solution obj;
//     int maxNum = obj.maximum69Number(num);

//     cout << "The maximum number is: " << maxNum << endl;
// Delete Node Linked L
//   ListNode* node1 = new ListNode(1);
//     ListNode* node2 = new ListNode(2);
//     ListNode* node3 = new ListNode(3);
//     ListNode* node4 = new ListNode(4);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     Solution obj;
//     obj.deleteNode(node2);

//     ListNode* current = node1;
//     while (current != NULL) {
//         cout << current->val << " ";
//         current = current->next;
//     }
//     cout << endl;

//     delete node1;
//     delete node3;
//     delete node4;

// Reverse Linked L

//  ListNode* node1 = new ListNode(1);
//     ListNode* node2 = new ListNode(2);
//     ListNode* node3 = new ListNode(3);
//     ListNode* node4 = new ListNode(4);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     Solution obj;
//     ListNode* reversedList = obj.reverseList(node1);

//     ListNode* current = reversedList;
//     while (current != nullptr) {
//         cout << current->val << " ";
//         current = current->next;
//     }
//     cout << endl;

//     delete reversedList;
//     delete node2;
//     delete node3;
//     delete node4;

// First Unique Char
//   Solution sol;

//     string input = "leetcode";
//     int index = sol.firstUniqChar(input);

//     cout << "First Unique Character Index: " << index << endl;
// Queue Using Stack
// MyQueue queue;

//     queue.push(5);
//     queue.push(3);
//     queue.push(9);

//     int poppedElement = queue.pop();
//     cout << "Popped Element: " << poppedElement << endl;

//     int frontElement = queue.peek();
//     cout << "Front Element: " << frontElement << endl;

//     bool isEmpty = queue.empty();
//     cout << "Is Queue Empty? " << (isEmpty ? "Yes" : "No") << endl;
// Stack Using Queue
//  MyStack stack;

//     stack.push(5);
//     stack.push(3);
//     stack.push(9);

//     int poppedElement = stack.pop();
//     cout << "Popped Element: " << poppedElement << endl;

//     int topElement = stack.top();
//     cout << "Top Element: " << topElement << endl;

// //nese eshte bosh
//     bool isEmpty = stack.empty();
//     cout << "Is Stack Empty? " << (isEmpty ? "Yes" : "No") << endl;
// Max Product Difference
//  vector<int> nums = {4, 2, 5, 9, 7, 3};

//     Solution obj;
//     int result = obj.maxProductDifference(nums);

//     cout << "Maximum Product Difference: " << result << endl;

// Smaller Than Current
//   vector<int> nums = {8, 1, 2, 2, 3};

//     Solution obj;
//     vector<int> result = obj.smallerNumbersThanCurrent(nums);

//     cout << "Counts of smaller numbers: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
// Sorting Sentence

//   string s = "is2 sentence4 This1 a3";

//     Solution obj;
//     string sorted = obj.sortSentence(s);

//     cout << "Sorted sentence: " << sorted << endl;

// BaseBall Game
//  Solution sol;

//     vector<string> operations = {"5", "2", "C", "D", "+"};
//     int totalPoints = sol.calPoints(operations);

//     cout << "Total Points: " << totalPoints << endl;

// Final Prices Discount

//   Solution sol;

//     vector<int> prices = {8, 4, 6, 2, 3};
//     vector<int> finalPrices = sol.finalPrices(prices);

//     cout << "Final Prices: ";
//     for (int price : finalPrices) {
//         cout << price << " ";
//     }
//     cout << endl;

// Make String Great

// Solution sol;

//     string s = "leEeetcode";
//     string modifiedString = sol.makeGood(s);

//     cout << "Modified String: " << modifiedString << endl;
// Maximum Depth
//   TreeNode* root = new TreeNode(3);
//     root->left = new TreeNode(9);
//     root->right = new TreeNode(20);
//     root->right->left = new TreeNode(15);
//     root->right->right = new TreeNode(7);

//     // Kalkulu thellsin me te madhe
//     Solution obj;
//     int depth = obj.maxDepth(root);

//     cout << "The maximum depth of the tree is: " << depth << endl;

//     delete root->right->left;
//     delete root->right->right;
//     delete root->left;
//     delete root->right;
//     delete root;

// Range Sum Bst

// TreeNode* root = new TreeNode(10);
//     root->left = new TreeNode(5);
//     root->right = new TreeNode(15);
//     root->left->left = new TreeNode(3);
//     root->left->right = new TreeNode(7);
//     root->right->right = new TreeNode(18);

//     Solution obj;
//     int low = 7;
//     int high = 15;
//     int sum = obj.rangeSumBST(root, low, high);

//     cout << "The range sum is: " << sum << endl;

//     delete root->left->left;
//     delete root->left->right;
//     delete root->left;
//     delete root->right->right;
//     delete root->right;
//     delete root;

// Same Tree
// TreeNode* root1 = new TreeNode(1);
//     root1->left = new TreeNode(2);
//     root1->right = new TreeNode(3);

//     TreeNode* root2 = new TreeNode(1);
//     root2->left = new TreeNode(2);
//     root2->right = new TreeNode(3);

//     Solution obj;
//     bool isSame = obj.isSameTree(root1, root2);

//     cout << "The trees are " << (isSame ? "the same." : "not the same.") << endl;

//     delete root1->left;
//     delete root1->right;
//     delete root1;
//     delete root2->left;
//     delete root2->right;
//     delete root2;

return 0;
}




