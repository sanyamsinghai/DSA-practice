class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt_l = 0;
        int cnt_r = 0;
        int cnt_ = 0;

        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'L') {
                cnt_l++;
            } else if (moves[i] == 'R') {
                cnt_r++;
            } else {
                cnt_++;
            }
        }
        return (abs(cnt_l - cnt_r) + cnt_);
    }
};