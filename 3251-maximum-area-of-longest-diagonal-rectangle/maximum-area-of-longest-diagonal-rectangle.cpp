class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxarea = 0;
        float maxD = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int curL = dimensions[i][0];
            int curW = dimensions[i][1];

            float curD = sqrt(curL * curL + curW * curW);
            int curArea = curL * curW;

            if (curD > maxD || curD == maxD && curArea > maxarea) {
                maxD = curD;
                maxarea = curArea;
            }
        }
        return maxarea;
    }
};