class Solution:
    def makeGood(self, s: str) -> str:
        l = []  
        for i in s:
            if l and abs(ord(i) - ord(l[-1])) == 32:l.pop()
            else:l.append(i)
        res = ''
        for i in l:res += i
        return res
