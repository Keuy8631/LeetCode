# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
        check = set()

        for num in nums:
            check.add(num)
        root = None
        temp = None
        while head:
            # print(head.val)
            if head.val not in check and root == None:
                root = ListNode(head.val)
                temp = root
                # print(head.val)
            elif head.val not in check:
                temp.next = ListNode(head.val)
                temp = temp.next

            head = head.next
            
                
        return root