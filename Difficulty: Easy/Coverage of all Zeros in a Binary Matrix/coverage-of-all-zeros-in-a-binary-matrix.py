class Solution:
    def findCoverage(self, mat):
        # code here
        rows = len(mat)
        cols = len(mat[0])
        total = 0
        
        for i in range(rows):
            for j in range(cols):
                if mat[i][j]==0:
                    cnt = 0
                    
                    left = j-1
                    while left>=0:
                        if mat[i][left]==1:
                            cnt+=1
                            break
                        left-=1
                        
                    right = j+1
                    while right<cols:
                        if mat[i][right]==1:
                            cnt+=1
                            break
                        right+=1
                        
                    up = i-1
                    while up>=0:
                        if mat[up][j]==1:
                            cnt+=1
                            break
                        up-=1
                    
                    down = i+1
                    while down<rows:
                        if mat[down][j]==1:
                            cnt+=1
                            break
                        down+=1
                        
                    total += cnt
                    
        return total