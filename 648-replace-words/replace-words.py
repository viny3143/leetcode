class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        root_words = set(dictionary)
        sentence_words = sentence.split()
        final_sentence = []
        for word in sentence_words:
            for i in range(len(word) + 1):
                prefix = word[:i]
                if prefix in root_words:
                    final_sentence.append(prefix)
                    break
            else:final_sentence.append(word)
        return ' '.join(final_sentence)
