class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int ld=0;
        int temp=num;
        while(num>0){
            ld=num%10;
            if(temp%ld==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};