/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL) return head;

    struct ListNode *slow, *fast, *prev = NULL, *curr;
    slow = fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    curr = slow;

    while(curr != NULL) {
        struct ListNode* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }

    while(prev != NULL) {
        if(head -> val != prev -> val) return false;
        head = head -> next;
        prev = prev -> next;
    }

    return true;
}