/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head == NULL || head -> next == NULL) return NULL;

    struct ListNode* slow, *fast;
    slow = fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    if(slow -> next == NULL) {
        head -> next = NULL;
        return head;
    }

    slow -> val = slow -> next -> val;
    slow -> next = slow -> next -> next;

    return head;
}