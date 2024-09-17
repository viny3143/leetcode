class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        check = {}
        for i in s1.split():
            if i not in check:check[i] = 1
            else:check[i] += 1
        for i in s2.split():
            if i not in check:check[i] = 1
            else:check[i] += 1
        result = []
        for i in check:
            if check[i] == 1:result.append(i)
        return result