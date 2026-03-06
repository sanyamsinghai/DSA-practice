class Solution {
public:
    bool checkOnesSegment(string s) {
        bool zero_seen = false;
        for (char c : s) {
            if (c == '0')
                zero_seen = true;
            if (c == '1' && zero_seen)
                return false;
        }
        return true;
    }
};