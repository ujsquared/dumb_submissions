
/* sol by: uj
*  time : Wed Aug  6 10:59:48 AM IST 2025
*  rating :
*  problemNum : reverseeLL 
*  tags :
*/

#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
// Definition for singly-linked list.
// This is the structure provided by LeetCode.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// -------------------------------------------------------------------

class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        ListNode* newHead = reverseLL(head->next);


        ListNode* front = head->next;
        
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};

// -------------------------------------------------------------------

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const std::vector<int>& nums) {
    if (nums.empty()) {
        return nullptr;
    }
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Main function to run and test the solution
int main() {
    // 1. Instantiate the Solution class
    Solution mySolution;

    // 2. Create test cases (as vectors for simplicity)
    // Example: l1 = [2, 4, 3], l2 = [5, 6, 4]
    // Represents 342 + 465 = 807
    std::vector<int> vec1 = {2, 4, 3};
    std::vector<int> vec2 = {5, 6, 4};

    // 3. Convert vectors to linked lists
    ListNode* l1 = createLinkedList(vec1);
    ListNode* l2 = createLinkedList(vec2);

    std::cout << "Input List 1: ";
    printLinkedList(l1);

    std::cout << "Input List 2: ";
    printLinkedList(l2);

    // 4. Call the solution function with the test data
    ListNode* result = mySolution.reverseLL(l1);

    // 5. Print the result to verify correctness
    // Expected output: 7 -> 0 -> 8 -> nullptr
    std::cout << "Result List:  ";
    printLinkedList(result);

    // Remember to free the allocated memory for the linked lists
    // (This part is often handled by LeetCode's environment automatically)
    // A simple deletion loop:
    auto deleteList = [](ListNode* head) {
        while (head != nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    };

    deleteList(l1);
    deleteList(l2);
    deleteList(result);

    return 0;
}
