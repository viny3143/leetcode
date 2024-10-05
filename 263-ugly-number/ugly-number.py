class Solution:
    def isUgly(self, n: int) -> bool:
        if n <= 0:return False
        check = [2,3,5]
        for i in check:
            while n % i == 0:n //= i
        return n == 1