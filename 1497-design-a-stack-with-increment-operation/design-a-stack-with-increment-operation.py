from collections import deque
class CustomStack:

    def __init__(self, maxSize: int):
        self.size = maxSize
        self.array = deque()

    def push(self, x: int) -> None:
        if len(self.array) == self.size:
            return 
        self.array.append(x)

    def pop(self) -> int:
        if len(self.array) == 0:
            return -1
        return self.array.pop()

    def increment(self, k: int, val: int) -> None:
        for i in range(min(k,len(self.array))):
            self.array[i]+=val


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)