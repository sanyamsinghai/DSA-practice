class Solution:
    def transpose(self, mat):
        # code here
        for i in range(len(mat)):
            for j in range(i+1,len(mat)):
                mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
        
        return mat