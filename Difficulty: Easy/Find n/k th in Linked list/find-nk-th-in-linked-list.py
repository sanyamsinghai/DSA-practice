# Structure of a Linked List Node
# class Node:
#     def __init__(self, x):
#         self.data = x
#         self.next = None

class Solution:
    def fractionalNode(self, head, k):
        # code here
        temp = head
        length = 0
        while temp:
            length+=1
            temp = temp.next
        
        i = head
        pos = (length + k - 1) // k 
        cnt=1
        while i:
            if cnt==pos:
                break
            i=i.next
            cnt+=1
        return i.data
            
        