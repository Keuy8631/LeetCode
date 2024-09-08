# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        temp = []
        ret = []
        if head == None:
            for _ in range(k):
                ret.append(None)
            return ret
        new_head = head
        while head:
            temp.append(head.val)
            head = head.next

        addition = len(temp)%k
        length = len(temp)//k

        now = 0
        
        new = new_head
        for i in range(k):
            if new == None:
                for _ in range(k-i):
                    ret.append(None)
                return ret
            if length >0 and addition>0:
                new_root = new
                for _ in range(length):
                    new = new.next
                if new:
                    temp = new.next
                    new.next = None
                    new = temp
                else:
                    new = None
                ret.append(new_root)
                addition-=1
            elif length >0 and addition==0:
                new_root = new
                for _ in range(length-1):
                    new = new.next
                temp = new.next
                new.next = None
                new = temp
                ret.append(new_root)
            elif length == 0 and addition>0: 
                new_root = new
                temp = new.next
                new.next = None
                new = temp
                ret.append(new_root)
                addition-=1
        return ret

