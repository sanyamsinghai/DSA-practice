#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mapp;

        for (char ch : magazine) {
            mapp[ch]++;
        }

        for (char ch : ransomNote) {
            if (mapp[ch] <= 0) {
                return false;
            }
            mapp[ch]--;
        }

        return true;
    }
};