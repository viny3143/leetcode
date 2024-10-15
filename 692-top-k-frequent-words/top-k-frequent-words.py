class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        mp = {}
        for i in words:
            if i not in mp:
                mp[i] = 1
            else:
                mp[i] += 1
        mp = sorted(mp.items(), key=lambda x: (-x[1], x[0]))
        l = []
        for key, value in mp:
            if k > 0:
                l.append(key)
                k -= 1
        return l