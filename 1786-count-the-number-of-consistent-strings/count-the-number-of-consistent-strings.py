class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        cnt = 0
        for i in words:
            for_check = 0
            i = set(i)
            for check in i:
                if check not in allowed:break
                else:for_check += 1
            if(for_check == len(i)):cnt += 1
        return cnt