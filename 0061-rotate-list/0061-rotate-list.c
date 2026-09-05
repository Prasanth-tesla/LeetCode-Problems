/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode)), *temp, *slow, *fast;
    slow = fast = dummy;
    dummy -> next = temp = head;
    int size = 0;

    while(temp != NULL) {
        size++;
        temp = temp -> next;
    }

    int corr = size ? (k % size) : 0;

    while(corr--) fast = fast -> next;

    while(fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next;
    }

    if(slow != fast) {
        fast -> next = head;
        dummy -> next = slow -> next;
        slow -> next = NULL;
    }

    return dummy -> next;
}