class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = needle.size();                                
        for (int i = 0; i < haystack.size(); i++) {         
            if (needle == haystack.substr(i, x)) {          // Check if the substring of haystack starting at index i and of length x is equal to the needle
                return i;                                  // If true, return the current index i
            }
        }
        return -1;   
    }
};