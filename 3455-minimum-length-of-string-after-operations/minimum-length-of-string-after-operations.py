class Solution:
    def minimumLength(self, s: str) -> int:
        count = Counter(s)
        checker = 0
        for x in count.values():
            while x >= 3:
                checker += 2
                x -= 2
        return len(s) - checker