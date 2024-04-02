class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        S = [0] * 200
        T = [0] * 200
        #print(type(S))
        if len(s) != len(t):return False
        for i in range(len(s)):
            if S[ord(s[i])] != T[ord(t[i])]:return False
            S[ord(s[i])] = i + 1
            T[ord(t[i])] = i + 1
        return True