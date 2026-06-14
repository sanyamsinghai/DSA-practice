'''
# Node Class    
class Node:
    def __init__(self, val):
        self.data = val
        self.next = None
'''
class Solution:
    def areIdentical(self, head1, head2):
        # Code here
        temp1 = head1
        temp2 = head2
        
        while temp1 and temp2:
            if temp1.data!=temp2.data:
                return False
            else:
                temp1=temp1.next
                temp2=temp2.next
        
        if not temp1 and not temp2:
            return True
        return False
        