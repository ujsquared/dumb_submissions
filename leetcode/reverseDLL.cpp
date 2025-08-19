
/* sol by: uj
*  time : Tue Aug  5 10:16:24 PM IST 2025
*  rating :
*  problemNum : reverseDLL 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = nullptr;
        this->prev = nullptr;
    };
};

void printList(DLLNode* node) {
    while (node != nullptr) {
        std::cout << node->data << " <-> ";
        node = node->next;
    }
    std::cout << "nullptr" << std::endl;
}


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

class Solution {
public:
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head == NULL) return NULL;
        DLLNode* 
    };
};

int main() {
    // Create a sample doubly linked list: 1 <-> 2 <-> 3 <-> 4
    DLLNode* head = nullptr;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    std::cout << "Original Doubly Linked List:" << std::endl;
    printList(head);

    // Create an instance of the Solution class and reverse the list
    Solution solution;
    head = solution.reverseDLL(head);

    std::cout << "\nReversed Doubly Linked List:" << std::endl;
    printList(head);

    // Clean up memory
    while (head != nullptr) {
        DLLNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

