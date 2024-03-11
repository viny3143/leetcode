class Solution(object):
    def customSortString(self, order, s):
        char_cnt = {char: 0 for char in order}
        for char in s:
            if char in char_cnt:
                char_cnt[char] += 1
    
        sorted_s = ''
        for char in order:
            sorted_s += char * char_cnt[char]
    
        for char in s:
            if char not in order:
                sorted_s += char

        return sorted_s 