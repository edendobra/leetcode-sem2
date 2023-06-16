#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>
#include <string>
#include <stack> 
#include <queue>
#include <algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int maxProduct = nums[n - 1] * nums[n - 2];
        int minProduct = nums[0] * nums[1];

        return maxProduct - minProduct;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int counter;
        for (int i = 0; i < n; i++) {
            counter = 0;
            for (int j = 0; j < n; j++) {
                if (i != j && nums[i] > nums[j]) {
                    counter++;
                }
            }
            result[i] = counter;
        }
        return result;
    }

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

    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        for (int i = 0; i < prices.size(); i++) {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            result.push_back(prices[i] - discount);
        }
        return result;
    }
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

 int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        return max(leftDepth, rightDepth) + 1;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return 0;
        }
        
        if (root->val < low) {
            return rangeSumBST(root->right, low, high);
        } else if (root->val > high) {
            return rangeSumBST(root->left, low, high);
        } else {
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        
        if (p == nullptr || q == nullptr) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }



     vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int num : aliceSizes) {
            sumA += num;
        }
        for (int num : bobSizes) {
            sumB += num;
        }

        int target = (sumA - sumB) / 2;
        for (int num : aliceSizes) {
            int complement = num - target;
            for (int numB : bobSizes) {
                if (numB == complement) {
                    return { num, numB };
                }
            }
        }

        return {}; 
    }
     char nextGreatestLetter(vector<char>& letters, char target) {
        for (char letter : letters) {
            if (letter > target) {
                return letter;
            }
        }
        
        return letters[0];
    }
     int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        
        return sum;
    }
    string largestOddNumber(string num) {
        int n = num.length();

        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
    int maximum69Number(int num) {
        string numStr = to_string(num);
        
        int pos = -1;
        for (int i = 0; i < numStr.length(); i++) {
            if (numStr[i] == '6') {
                pos = i;
                break;
            }
        }
        
        if (pos != -1) {
            numStr[pos] = '9';
        }
        
        return stoi(numStr);
    }
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

#endif
