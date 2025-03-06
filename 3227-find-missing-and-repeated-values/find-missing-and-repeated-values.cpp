class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size=grid.size()*grid.size();
        vector<int> freq(size+1 , 0);

        int repeated=-1;
        int missing=-1;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=size;i++){
            if(freq[i]==0) missing=i;
            if(freq[i]==2) repeated=i;
        }
        return {repeated,missing};
    }
};