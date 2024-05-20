class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>sett;

        for(int i=0 ; i<s.length() ; i++){
            sett.insert(s[i]);
        }
        return sett.size();
    }
};