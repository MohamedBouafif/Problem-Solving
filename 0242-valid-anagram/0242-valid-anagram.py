class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        s = "".join(sorted(s))
        t = "".join(sorted(t))
        
        for j in range(len(s)):
            if s[j] != t[j]:
                return False
        return True
        