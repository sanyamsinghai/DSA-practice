class Solution:
    def isBalanced(self, s):
        # code here
        st = []
        for char in s:
            if char in '({[':
                st.append(char)
            else:
                if not st:
                    return False
                ch = st.pop()
                if (char == ')' and ch == '(') or \
                   (char == ']' and ch == '[') or \
                   (char == '}' and ch == '{'):
                    continue
                else:
                    return False
        return not st        
        