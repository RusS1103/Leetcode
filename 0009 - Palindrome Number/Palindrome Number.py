class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 : return False
        s = str(x)
        rev_s = ""
        for i in range(len(s) - 1, -1, -1):
            rev_s += s[i]
        return s == rev_s
