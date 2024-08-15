class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        c = {5:0,10:0,20:0}
        for bill in bills:  
            c[bill]+=1
            if bill == 10:
                if c[5] == 0:return False
                c[5]-=1
            elif bill == 20:
                
                if c[10] == 0:
                    c[5]-=3
                else:
                    c[5]-=1
                    c[10]-=1
                if c[5] < 0 or c[10]<0:return False

        return True