class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int r=s.size();
        char temp;
        while(i<r){
            temp=s[i];
            s[i]=s[r-1];
            s[r-1]=temp;
            i++;
            r--;
        }
    }
};