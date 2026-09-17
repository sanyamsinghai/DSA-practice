class Solution {
public:
    int reverse(int x) {
        long int ld,rev=0;

        if(rev>INT_MAX && rev<INT_MIN) return 0;

        while(x){
        ld=x%10;
        rev=(rev*10)+ld;
        x=x/10;
        }

        if(rev<INT_MAX && rev>INT_MIN){
        return rev;
        }
        return {};

    }
};