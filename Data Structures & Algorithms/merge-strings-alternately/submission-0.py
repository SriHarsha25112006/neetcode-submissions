class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i, j, m, n = 0, 0, len(word1), len(word2)
        s = ''
        while i < m and j < n:
            s += word1[i]
            s += word2[j]
            i += 1
            j += 1
        while i < m:
            s += word1[i]
            i += 1
        while j < n:
            s += word2[j]
            j += 1
        return s