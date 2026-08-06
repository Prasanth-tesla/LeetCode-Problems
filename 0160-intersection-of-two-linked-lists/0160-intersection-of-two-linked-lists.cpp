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
        ListNode *c1, *c2;
        c1 = headA;
        c2 = headB;
        while(c1 != c2) {
            c1 = (c1 == NULL) ? headB : c1->next;
            c2 = (c2 == NULL) ? headA : c2->next;
        }

        return c1; 
    }
};