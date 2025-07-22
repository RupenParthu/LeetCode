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
    bool isPalindrome(ListNode* head) {
        ListNode* turtle = head;
        ListNode* hare = head;
        while(hare!=nullptr && hare->next!=nullptr){
            turtle = turtle->next;
            hare = hare->next->next;
        }
        ListNode* mid = turtle;
        stack<int>st;
        while(mid!=nullptr){
            st.push(mid->val);
            mid = mid->next;
        }
        while(head!=turtle){
            if(head->val != st.top()){
                return false;
            }
            st.pop();
            head = head->next;
        }
        return true;
    }
};