class CustomStack:
    def __init__(self, maxSize: int):
        self.maxSize = maxSize
        self.st = []

    def push(self, x: int) -> None:
        if self.maxSize > len(self.st):
            self.st.append(x)

    def pop(self) -> int:
        if len(self.st) == 0:
            return -1
        return self.st.pop()

    def increment(self, k: int, val: int) -> None:
        if len(self.st) <= k:
            for i in range(len(self.st)):
                self.st[i] += val
        else:
            for i in range(k):
                self.st[i] += val


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)
