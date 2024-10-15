class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=x^y;
        int cnt=0;
        for(int i=0 ; i<32 ; i++){
            if(res&(1<<i)){
                cnt++;
            }
        }
        return cnt;
    }
};