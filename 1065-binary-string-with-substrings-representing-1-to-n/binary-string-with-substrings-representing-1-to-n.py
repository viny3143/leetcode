class Solution:
    def queryString(self, s: str, n: int) -> bool:
        while n:
            b = bin(n)[2:]
            n -= 1
            if b not in s:return False
        return True