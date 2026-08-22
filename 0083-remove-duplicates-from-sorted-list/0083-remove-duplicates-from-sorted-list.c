/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head -> next == NULL) return head;
    struct ListNode* left = head, *right = head -> next;

    while (right != NULL) {
        if (right->val != left->val) {
            left->next = right;
            left = right;
        }
        right = right->next;
    }

    left->next = NULL;

    return head;
}