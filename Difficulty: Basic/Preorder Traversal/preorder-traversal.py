'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    def preOrder(self, root):
    # code here
        ans = []
    
        def pre(node):
            if node is None:
                return

            ans.append(node.data)
            pre(node.left)
            pre(node.right)

        pre(root)
        return ans
    