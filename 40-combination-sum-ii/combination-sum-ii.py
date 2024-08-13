class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates = sorted(candidates)
        ans = []
        def search(temp,total,start):
            if total == target :
                ans.append(temp)
                return
            if total >target:
                return

            for i in range(start,len(candidates)):
                if i > start and candidates[i-1] == candidates[i]:
                    continue
                search(temp+[candidates[i]],total+candidates[i],i+1)

        search([],0,0)
        return ans