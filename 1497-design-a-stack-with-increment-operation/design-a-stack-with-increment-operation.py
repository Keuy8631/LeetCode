from collections import deque
class CustomStack:

    def __init__(self, maxSize: int):
        self.array = [0]*maxSize
        self.inc = [0]*maxSize
        self.idx = -1

    def push(self, x: int) -> None:
        if self.idx == len(self.array)-1:
            return 
        self.idx+=1
        self.array[self.idx]=x
        

    def pop(self) -> int:
        
        if self.idx == -1:
            return -1
        now = self.array[self.idx] +self.inc[self.idx]
        if self.idx>0:
            self.inc[self.idx-1]+=self.inc[self.idx]
        self.inc[self.idx] = 0
        self.idx-=1
        return now

    def increment(self, k: int, val: int) -> None:
        if self.idx!=-1:
            k = min(k-1,self.idx)
            self.inc[k] += val


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)