class Solution:
    def findKthNumber(self, n: int, k: int) -> int:
    #    ans = []
        cur = 1
        k-=1
        while k>0:
            # print(cur)
            # ans.append(cur)
            step = self.count_steps(n, cur, cur + 1)
            if step>k:
                cur*=10
                k-=1
                # print(cur,k)
            else:
                k-=step
                cur+=1
        return cur 
    # To count how many numbers exist between prefix1 and prefix2
    def count_steps(self, n, prefix1, prefix2):
        steps = 0
        while prefix1 <= n:
            steps += min(n + 1, prefix2) - prefix1
            # print(min(n + 1, prefix2) - prefix1)
            prefix1 *= 10
            prefix2 *= 10
        return steps