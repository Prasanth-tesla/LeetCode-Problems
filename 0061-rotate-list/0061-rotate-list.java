/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        ListNode dummy = new ListNode(), slow, fast;
        dummy.next = slow = head;

        int size = 0;
        while(slow != null) {
            size++;
            slow = slow.next;
        }

        slow = fast = dummy;
        int corr = size != 0 ? (k % size) : 0;

        while(fast.next != null) {
            if(corr > 0) {
                fast = fast.next;
                corr--;
            } else {
                slow = slow.next;
                fast = fast.next;
            }
        }

        if(slow != fast) {
            fast.next = head;
            dummy.next = slow.next;
            slow.next = null;
        }

        return dummy.next;
    }
}