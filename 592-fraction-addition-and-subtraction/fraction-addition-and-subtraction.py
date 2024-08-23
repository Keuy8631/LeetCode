from fractions import Fraction
class Solution:
    def fractionAddition(self, expression: str) -> str:
        now = 0
        positive = 1
        A = float('inf')
        B = float('inf')
        ans = 0
        while now<len(expression):
            if now+1<len(expression) and expression[now].isdigit() and  expression[now+1].isdigit():
                if A == float('inf'):
                    A = int(expression[now:now+2])
                else:
                    ans+=Fraction(A,int(expression[now:now+2]))*positive
                    positive = 1
                    A = float('inf')
                    B = float('inf')
                now+=1
            elif expression[now].isdigit() :
                if A == float('inf'):
                    A = int(expression[now])
                else:
                    ans+=Fraction(A,int(expression[now]))*positive
                    positive = 1
                    A = float('inf')
                    B = float('inf')
            elif expression[now]=="-":
                positive = -1
            
            now+=1
        # print(ans)
        if "/" not in str(ans):
            return str(ans)+"/1"
        return str(ans)