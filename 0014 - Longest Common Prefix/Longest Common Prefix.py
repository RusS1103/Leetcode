class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        lists = list(zip(*strs))
        print(*lists)
        prefix = ""
        for el in lists:
            if len(set(el)) == 1:
                prefix += el[0]
            else:
                break
        return prefix
