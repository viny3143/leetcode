class Solution:
    def sortVowels(self, s: str) -> str:
        ans = ""
        l  = ['A','a','E','e','I','i','O','o','U','u']
        res = []
        for i in s:
            if i in l:res.append(i)
        res.sort()
        i,j = 0,0
        while(i<len(s)):
            if s[i] in l:
                ans += res[j]
                j += 1
            else:
                ans += s[i]
            i += 1
        return ans