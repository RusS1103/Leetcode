class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        alphabet = [0] * 26
        
        for el in sentence:
            alphabet[ord(el) - 97] += 1
        
        for el in alphabet:
            if el == 0:
                return False
        
        return True
