class Solution(object):
    def hIndex(self, citations):
        citations.sort(reverse=True)
        count = 1
        for i in range(len(citations)):
            if citations[i] >= count:
                count += 1
            else:
                break
        return count - 1

