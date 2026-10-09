class Solution(object):
    def isStrictlyPalindromic(self, n):
        result = True
        for i in range (2, n-1):
            x = n
            num = ""
            while (x):
                num = str(x % i) + num
                x = x//i
            if str(num)!=str(num)[::-1]:
                result = False
        return result
        