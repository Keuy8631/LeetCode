class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        now = sum(rolls)
        found = mean*(len(rolls)+n) - now
        if found <=0: return []
        avg = int(found/n)
        if avg>6 or avg ==0: return []
        ans = [avg]*n
        found-=avg*n
        for i in range(found):
            if ans[i] == 6: return []
            ans[i]+=1
        
        return ans