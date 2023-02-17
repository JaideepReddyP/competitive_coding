#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* prev_index = head;
    ListNode* index = head;
    int counter = 0;
    while(index->next) {
        index = index->next;
        if(counter >= n) {
            prev_index = prev_index->next;
        } else {
            counter++;
        }
    }
    if(counter == 0) head = nullptr;
    else if(counter < n) return head->next;
    else prev_index->next = prev_index->next->next;

    return head;
}  

int main() {
    ListNode d(5);
    ListNode c(4, &d);
    ListNode b(3, &c);
    ListNode a(2, &b);
    ListNode head(1, &a);
    
    ListNode* temp = removeNthFromEnd(&head, 2);
    while(temp) {
        cout << temp->val << ' ';
        temp = temp->next;
    }
}