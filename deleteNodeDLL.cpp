
/* sol by: uj
*  time : Tue Aug  5 11:05:22 PM IST 2025
*  rating :
*  problemNum : deleteNodeDLL 
*  tags :
*/
/* sol by: uj
* time : Tue Aug  5 10:16:24 PM IST 2025
* rating :
* problemNum : deleteNode
* tags : Doubly Linked List, Deletion
*/
#include<bits/stdc++.h> // Includes common headers like iostream, cstdlib, etc.
using namespace std;
typedef long long ll; // Defines a shorthand for long long

// Definition for a Doubly Linked List Node.
class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    // Constructor to initialize a new node with a value
    DLLNode(int val) {
        data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }; // Note the semicolon as per your desired scaffold style
};

// Function to print the doubly linked list from head to tail
void printList(DLLNode* node) {
    while (node != nullptr) {
        std::cout << node->data << " <-> ";
        node = node->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to insert a new node at the end of the list
void insertAtEnd(DLLNode*& head, int data) {
    DLLNode* newNode = new DLLNode(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    DLLNode* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
    newNode->prev = last;
}

// Solution class to hold the function to be implemented
class Solution {
public:
    DLLNode* deleteNode(DLLNode* head, int x) {
        return head;
    }
    cout << "left->val => " << left->val  << "\n";
    cout << "right->val => " << left->val  << "\n";
};

int main() {
    // Create a sample doubly linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    DLLNode* head = nullptr;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    std::cout << "Original Doubly Linked List:" << std::endl;
    printList(head);

    Solution solution;

    int pos1 = 3;
    head = solution.deleteNode(head, pos1);
    std::cout << "\nAfter deleting node at position " << pos1 << ":" << std::endl;
    printList(head); // Expected: 1 <-> 2 <-> 4 <-> 5

    int pos2 = 1;
    head = solution.deleteNode(head, pos2);
    std::cout << "\nAfter deleting node at position " << pos2 << ":" << std::endl;
    printList(head); // Expected: 2 <-> 4 <-> 5

    int pos3 = 3;
    head = solution.deleteNode(head, pos3);
    std::cout << "\nAfter deleting node at position " << pos3 << ":" << std::endl;
    printList(head); // Expected: 2 <-> 4

    head = solution.deleteNode(head, 1); // Delete 2
    head = solution.deleteNode(head, 1); // Delete 4
    std::cout << "\nAfter deleting all remaining nodes:" << std::endl;
    printList(head); // Expected: nullptr

    while (head != nullptr) {
        DLLNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

