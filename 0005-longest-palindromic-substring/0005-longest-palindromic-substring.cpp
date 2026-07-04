class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int len = 0;
        string ans = "";
        for (int i = 0; i < n; i++) {

            // odd length
            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if ((right - left - 1) > len) {
                len = right - left - 1;
                ans = s.substr(left + 1, right - left - 1);
            }

            // even length
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if ((right - left - 1) > len) {
                len = right - left - 1;
                ans = s.substr(left + 1, right - left - 1);
            }
        }
        return ans;
    }
};