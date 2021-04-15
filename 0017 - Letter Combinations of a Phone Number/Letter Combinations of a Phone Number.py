class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if len(digits) == 0:
            return []
        
        numbers = ["0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        result = []
        
        self.backtrack(result, digits, numbers, '', 0)
        
        return result
        
    def backtrack(self, result: List[str], digits: str, numbers: List[str], path: str, index: int) -> None:
        if len(path) == len(digits):
            result.append(path)
            return
        letters = numbers[int(digits[index])]
        
        for i in range(len(letters)):
            self.backtrack(result, digits, numbers, path + letters[i], index + 1)
