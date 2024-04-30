class Solution {
public:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return 1;
        }
        return 0;
    }

    // convert into lowercase
    char tolowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    // chech palindrome
    bool chech_palindrome(string name) {
        int start = 0;
        int end = name.length() - 1;

        while (start <= end) {
            if (name[start] != name[end]) {
                return 0;
            } else {
                start++;
                end--;
            }
        }
        return 1;
    }

    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        // convert into lowercase
        for (int i = 0; i < temp.length(); i++) {
            temp[i] = tolowercase(temp[i]);
        }

        //checking palindrome
        return chech_palindrome(temp);
    }
};