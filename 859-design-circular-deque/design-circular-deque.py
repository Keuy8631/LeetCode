class Node:
    def __init__(self, val, next = None, prev = None):
        self.val = val
        self.next = next
        self.prev = prev

class MyCircularDeque:

    def __init__(self, k: int):
        self.size = 0
        self.capacity = k
        self.last = None
        self.front = None

    def insertFront(self, value: int) -> bool:
        if self.size == self.capacity:
            return False
        if self.front == None:
            self.front = Node(value)
            self.last = self.front
        else:
            newOne = Node(value,self.front,None)
            self.front.prev = newOne
            self.front = newOne
        self.size +=1
        return True
    def insertLast(self, value: int) -> bool:
        if self.size == self.capacity:
            return False
        if self.last == None:
            self.last = Node(value)
            self.front = self.last
        else:
            self.last.next = Node(value,None,self.last)
            self.last = self.last.next
        self.size +=1
        return True
    def deleteFront(self) -> bool:
        if self.isEmpty():
            return False
        if self.size == 1:
            self.front = None
            self.last = None
        else:
            self.front = self.front.next
        self.size-=1
        return True

    def deleteLast(self) -> bool:
        if self.isEmpty():
            return False
        if self.size == 1:
            self.front = None
            self.last = None
        else:
            self.last = self.last.prev
        self.size-=1
        return True

    def getFront(self) -> int:
        if self.size == 0:
            return -1
        return self.front.val

    def getRear(self) -> int:
        if self.size == 0:
            return -1
        return self.last.val
        

    def isEmpty(self) -> bool:
        return  self.size == 0

    def isFull(self) -> bool:
        return self.capacity == self.size



# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()