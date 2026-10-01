class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for i in range(len(s)):
            if s[i]=='(' or s[i]=='{' or s[i]=='[':
                st.append(s[i])
            else:
                if not st:
                    return False
                temp = st.pop()
                if (s[i] == ')' and temp == '(') or \
                   (s[i] == '}' and temp == '{') or \
                   (s[i] == ']' and temp == '['):
                    continue
                else:
                    return False
        return not st