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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* dummy = new ListNode(), *slow, *fast;
        dummy -> next = slow = head;

        int size = 0;
        while(slow != nullptr) {
            size++;
            slow = slow -> next;
        }

        slow = fast = dummy;
        int corr = size ? (k % size) : 0;

        while(fast -> next != nullptr) {
            if(corr > 0) {
                fast = fast -> next;
                corr--;
            } else {
                slow = slow -> next;
                fast = fast -> next;
            }
        }

        if(slow != fast) {
            fast -> next = head;
            dummy -> next = slow -> next;
            slow -> next = nullptr;
        }

        return dummy -> next;
    }
};