class Solution:
    def maxDepth(self, s: str) -> int:
        cnt = 0
        max_num = 0
        for i in s:
            if i == "(":
                cnt += 1
                if max_num < cnt:max_num = cnt
            if i == ")":
                cnt -= 1
        return(max_num) 