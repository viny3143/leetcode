class Solution:
    def reverse(self, x: int) -> int:
        check = str(x)
        if check[0] != '-':check = check[::-1]
        else:check = '-' + check[:0:-1]
        number = int(check)
        if number > 2**31 - 1 or number < -2**31:return 0
        return number