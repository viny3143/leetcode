class Solution:
    def longestPalindrome(self, s: str) -> int:
        check = set()
        lgt = 0
        for i in s:
            if i in check:
                check.remove(i)
                lgt = lgt + 2
            else:check.add(i)
        if check:lgt = lgt + 1
        return lgt