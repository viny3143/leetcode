class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        cnt_1 = s.count('1')
        cnt_0 = s.count('0')
        return '1' * (cnt_1 - 1) + '0' * cnt_0 + '1'