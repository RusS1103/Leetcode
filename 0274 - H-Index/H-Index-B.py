class Solution(object):
    def hIndex(self, citations):
        n = len(citations)
        publications = [0] * (n + 1)
        
        for cit in citations:
            if cit < n:
                publications[cit] += 1
            else:
                publications[n] += 1
        
        i = n
        total = 0
        
        while i >= 0:
            total += publications[i]
            if total >= i:
                return i
        
            i -= 1
