class Solution:
    def searchMatrix(self, mat, x): 
        rows = len(mat)
        cols = len(mat[0])
    
        top = 0
        bottom = rows - 1
    
        while top <= bottom:
            mid = top + (bottom - top) // 2
    
            if x < mat[mid][0]:
                bottom = mid - 1
    
            elif x > mat[mid][cols - 1]:
                top = mid + 1
    
            else:
                left = 0
                right = cols - 1
    
                while left <= right:
                    mid_col = left + (right - left) // 2
    
                    if mat[mid][mid_col] == x:
                        return True
    
                    elif mat[mid][mid_col] < x:
                        left = mid_col + 1
    
                    else:
                        right = mid_col - 1
    
                return False
    
        return False