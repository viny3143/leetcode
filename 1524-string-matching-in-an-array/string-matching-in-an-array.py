class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        result = []
        for word in words:
            for check in words:
                if word in check and word != check:
                    result.append(word)
        
        return list(set(result))