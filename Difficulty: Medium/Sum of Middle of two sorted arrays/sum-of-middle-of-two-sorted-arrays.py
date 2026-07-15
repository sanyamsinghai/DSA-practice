class Solution:
    def sum_of_middle_elements(self, a, b):
        # code here
        total = len(a)+len(b)
        i=0
        j=0
        cnt=0
        num1 = 0
        num2 = 0
        while i<len(a) and j<len(b):
            if a[i]<=b[j]:
                if cnt==(total//2)-1:
                    num1 = a[i]
                if cnt==total//2:
                    num2 = a[i]
                i+=1
            else:
                if cnt==(total//2)-1:
                    num1 = b[j]
                elif cnt==total//2:
                    num2=b[j]
                j+=1
            cnt+=1
            
            
        if i<len(a):
            if cnt==(total//2)-1:
                num1 = a[i]
            if cnt==total//2:
                num2 = a[i]
                
        if j<len(b):
            if cnt==(total//2)-1:
                num1 = b[j]
            if cnt==total//2:
                num2 = b[j]
                
        return num1+num2