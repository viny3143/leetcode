class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = "aeiouAEIOU"
        l = list(s)
        i, j = 0, len(s) - 1
        while i < j:
            if l[i] not in vowels:i += 1
            elif l[j] not in vowels:j -= 1
            else:
                l[i], l[j] = l[j], l[i]
                i += 1
                j -= 1
        return "".join(l)