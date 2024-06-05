class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        common = Counter(words[0])
        for word in words[1:]:
            word_counter = Counter(word)
            common &= word_counter
        common = list(common.elements())
        return common
                