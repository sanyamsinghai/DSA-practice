class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        mapp = {}

        for ch in magazine:
            if ch in mapp:
                mapp[ch] += 1
            else:
                mapp[ch] = 1

        for ch in ransomNote:
            if ch not in mapp or mapp[ch] == 0:
                return False
            mapp[ch] -= 1

        return True