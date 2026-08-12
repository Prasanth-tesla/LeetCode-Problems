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
        if(head == nullptr) return head;

        ListNode *slow, *fast, *prev = nullptr, *curr;
        slow = fast = head;

        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        curr = slow;

        while(curr != nullptr) {
            ListNode* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        while(prev != nullptr) {
            if(head -> val != prev -> val) return false;
            head = head -> next;
            prev = prev -> next;
        }

        return true;
    }
};