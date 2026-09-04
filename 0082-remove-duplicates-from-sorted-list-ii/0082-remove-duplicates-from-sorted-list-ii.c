/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) return head;
    struct ListNode* dummy = malloc(sizeof(struct ListNode)), *tail = dummy;
    dummy -> next = head;
    struct ListNode* left = head, *right = head -> next;
    bool isFound = false;

    while(right != NULL) {
        if(left -> val != right -> val && !isFound) {
            tail -> next = left;
            tail = left;
            left = right;
        } else if(left -> val != right -> val) {
            isFound = false;
            left = right;
        } else isFound = true;
        right = right -> next;
    }

    if(isFound) tail -> next = right;
    else tail -> next = left;

    return dummy -> next;
}