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
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        ListNode temp = head;

        int size = 0;
        while(temp != null) {
            size++;
            temp = temp.next;
        }

        ListNode[] nums = new ListNode[size];
        temp = head;

        for(int i = 0; i < size; i++) {
            nums[i] = temp;
            temp = temp.next;
        }

        return buildTree(nums, 0, size - 1);
    }

    public TreeNode buildTree(ListNode[] nums, int low, int high) {
        if(low > high) return null;

        int mid = low + (high - low) / 2;
        TreeNode node = new TreeNode(nums[mid].val);

        node.left = buildTree(nums, low, mid - 1);
        node.right = buildTree(nums, mid + 1, high);

        return node;
    }
}