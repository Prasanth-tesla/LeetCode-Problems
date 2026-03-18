class Solution(object):
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return "0"
        hex = "0123456789abcdef"
        res = ""

        num = num & 0xffffffff

        while num > 0:
            rem = num % 16
            res = hex[rem] + res
            num //= 16
            
        return res
