class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        #n = len(jewels)
        cnt = 0
        c = Counter(stones)
        for i in jewels:
            if i in c:cnt += c[i]
        return cnt