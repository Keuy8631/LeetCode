class Solution:
    def diffWaysToCompute(self, expression: str) -> List[int]:
        ans = []

        if len(expression) == 0:
            return ans
        if len(expression) == 1 or (len(expression) == 2 and expression[0].isdigit()):
            return [int(expression)]

        for i, c in enumerate(expression):
            if c.isdigit():
                continue

            left_results = self.diffWaysToCompute(expression[:i])
            right_results = self.diffWaysToCompute(expression[i+1:])

            for left in left_results:
                for right in right_results:
                    if c == "+":
                        ans.append(left+right)
                    elif c == "-":
                        ans.append(left-right)
                    elif c == "*":
                        ans.append(left*right)

        return ans
            