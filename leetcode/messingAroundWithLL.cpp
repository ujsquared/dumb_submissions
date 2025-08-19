
/* sol by: uj
*  time : Wed Aug  6 01:21:41 PM IST 2025
*  rating :
*  problemNum : messingAroundWithLL 
*  tags :
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printVector(vector<int>& arr){
    for(ll i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        set<ListNode*> listHai;
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}

