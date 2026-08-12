# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        if head == None: 
            return True

        prev = None
        slow = fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        curr = slow

        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        while prev:
            if head.val != prev.val:
                return False
            head = head.next
            prev = prev.next

        return True