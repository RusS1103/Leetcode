class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        result = 0
        position = 3
        if ruleKey == 'type':
            position = 0
        elif ruleKey == 'color':
            position = 1
        elif ruleKey == 'name':
            position = 2
        for item in items:
            if item[position] == ruleValue:
                result += 1
        return result
