
/* sol by: uj
*  time : Sat Aug  9 05:17:49 PM IST 2025
*  rating :
*  problemNum : addOneToLastDigit 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        std::cout << node->data;
        if (node->next != NULL) {
            std::cout << "->";
        }
        node = node->next;
    }
    std::cout << std::endl;
}

class Solution {
public:
    Node* reverseLL(Node* head, Node* tail){
        Node* temp1 = head;
        Node* temp2 = head->next;
        while(temp2 != tail){
            Node* right = temp2->next;
            temp2->next = temp1;
            temp1 = temp2;
            temp2 = right;
        }
        temp2->next = temp1;
        return tail;
    }
    Node* reverseKgroup(Node* head, int k){
        Node* left = head;
        Node* right = head;
        Node* finalRes = head;
        int cnt = 1;
        while(cnt < k){
            finalRes = finalRes->next;
            cnt++;
        }
        while(right != NULL){
            cnt = 1;
            while(cnt < k){
                right = right->next;cnt++;
            }
            if(right == NULL) break;
            Node* rightMost = right->next;
            Node* tailOfReversed; 
            tailOfReversed = reverseLL(left, right);
            left->next = rightMost;
            left = rightMost;
            right = left;
        }
        return finalRes;
    }
};


int main() {
    Solution sol;

    Node* head = new Node(1);
    Node* head2 = new Node(2);
    head->next = head2;
    head->next->next = new Node(3);
    Node* tail = new Node(4);
    head2->next->next = tail;
    Node* rightmost = new Node(5);
    head2->next->next->next = rightmost;
    std::cout << "Original list : ";
    printList(head);
    cerr << "head2->data => " << head2->data  << "\n";
    cerr << "tail->data => " << tail->data  << "\n";
    Node* result2 = sol.reverseLL(head, tail);
    head->next = result2;
    head2->next = rightmost;
    std::cout << "Result after adding one and two: ";
    printList(head);
    std::cout << "-------------------------" << std::endl;

    // Test Case 3: Single digit (e.g., 5 + 1)

    // Add more test cases here as needed

    return 0;
}
