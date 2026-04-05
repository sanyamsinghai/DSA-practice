class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt_u = 0;
        int cnt_d = 0;
        int cnt_l = 0;
        int cnt_r = 0;

        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'U')
                cnt_u++;
            else if (moves[i] == 'D')
                cnt_d++;
            else if (moves[i] == 'L')
                cnt_l++;
            else
                cnt_r++;
        }
        if (cnt_u == cnt_d && cnt_l == cnt_r) {
            return true;
        }
        return false;
    }
};