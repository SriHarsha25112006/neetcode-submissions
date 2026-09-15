class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower().strip()
        t = 'abcdefghifklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'
        ss = ''
        for i in s:
            if i in t:
                ss += i
        return ss == ss[::-1]