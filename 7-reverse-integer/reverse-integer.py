class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        check = str(x)
        if check[0] != '-':check = check[::-1]
        else:check = '-' + check[:0:-1]
        number = int(check)
        if number > INT_MAX or number < INT_MIN:return 0
        return number