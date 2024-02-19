class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        l = [row.count('1') for row in bank if row.count('1') > 0]
        cnt = 0
        if len(l) <= 1:return 0
        elif len(l) == 2:return l[0] * l[1]
        for i in range(len(l)-1):cnt += l[i] * l[i + 1]
        return cnt