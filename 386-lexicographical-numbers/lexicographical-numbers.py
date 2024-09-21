class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        result = sorted(range(1, n + 1), key=str)
        return result