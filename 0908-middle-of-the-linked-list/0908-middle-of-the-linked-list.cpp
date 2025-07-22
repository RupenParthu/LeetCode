/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* turtle = head;
        ListNode* hare = head;
        while(hare!=nullptr && hare->next!=nullptr){
             turtle=turtle->next;
             hare = hare->next->next;
        }
        return turtle;
    }
};