class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        if len(arr) == 0:
            return []

        maxEl = arr[-1]
        arr[-1] = -1

        for i in range(len(arr) - 2, -1, -1):
            tempEl = maxEl
            maxEl = max(tempEl, arr[i])
            arr[i] = tempEl

        return arr

