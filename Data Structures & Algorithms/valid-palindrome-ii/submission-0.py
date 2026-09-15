class Solution:
    def validPalindrome(self, s: str) -> bool:
        if s == s[::-1]:
            return True
        n = len(s)
        for i in range(0, n):
            ss = s[0:i] + s[i+1:n]
            if ss == ss[::-1]:
                return True
        return False