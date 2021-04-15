class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        self.generate(n, n, '', result)
        return result
        
    def generate(self, left: int, right: int, s: str, result: List[str]) -> None:
        
        if left:
            self.generate(left - 1, right, s + '(', result)
            
        if right > left:
            self.generate(left, right - 1, s + ')', result)
            
        if right == 0:
            result.append(s)

