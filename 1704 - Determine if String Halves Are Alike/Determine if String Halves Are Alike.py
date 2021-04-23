class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        a = s[:len(s) // 2]
        b = s[len(s) // 2:]
        first_half = 0
        second_half = 0
        vowels = ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U')
        
        for el in a:
            if el in vowels:
                first_half += 1
        for el in b:
            if el in vowels:
                second_half += 1
        
        return first_half == second_half

