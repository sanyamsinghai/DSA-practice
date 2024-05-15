class Solution {
public:
    bool isPerfectSquare(int x) {
        int low = 1;
        int high = x;

        if (x == 1) return true;
        while (low <= high) {
            long long  mid = low + (high - low) / 2;

            if ((mid*mid) == x) { 
                return true;
            } 
            else if((mid*mid) < x) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};