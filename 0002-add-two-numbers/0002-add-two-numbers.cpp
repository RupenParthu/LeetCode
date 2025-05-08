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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, *tail = NULL;
        int carry = 0;
        while (l1 || l2 || carry) {
        int a = (l1 != nullptr) ? l1->val : 0;
        int b = (l2 != nullptr) ? l2->val : 0;
        
        int sum = a + b + carry;
        carry = (sum)/10;

        ListNode* result = new ListNode(sum % 10);
        
        if(head==NULL){
             head = result;
             tail = result;
        }else{
            tail->next = result;
            tail = result;
        }
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;

    }
    return head;
    }
};