""" Structure of Linked List Node
class Node:
    def __init__(self, val):
        self.data = val
        self.next = None
"""

class Solution:
    def reverseList(self, head):
        # Code here
        if head is None or head.next is None:
            return head

        temp = head
        front = None
        prev = None

        while temp is not None:
            front = temp.next
            temp.next = prev
            prev = temp
            temp = front

        return prev