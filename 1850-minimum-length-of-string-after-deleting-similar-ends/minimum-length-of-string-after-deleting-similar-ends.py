class Solution:
    def minimumLength(self, s: str) -> int:
        i = 0
        j = len(s)-1
        if s[i]!=s[j]:return len(s)
        c=s[i]
        while(i<j):
            while(i<j-1 and s[i] == c):i =i+1
            while(j>i-1 and s[j] == c):j =j-1
            if(s[i] == s[j]):c=s[i]
            else:break
        return j-i+1