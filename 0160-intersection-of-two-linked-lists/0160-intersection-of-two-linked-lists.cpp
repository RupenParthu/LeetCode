/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>maps;
        ListNode *temp = headA;
        int cnt = 0;
        while(temp!=nullptr){
            maps[temp] = cnt;
            cnt++;
            temp = temp->next;
        }
        temp = headB;
        cnt = 0;
        while(temp!=nullptr){
            if(maps.count(temp)){
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};