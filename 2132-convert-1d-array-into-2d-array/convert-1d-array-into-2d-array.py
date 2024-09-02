class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        now = 0
        ans = []
        if len(original) != m*n: return []
        for i in range(m):
            temp = []
            for j in range(n):
                temp.append(original[now])
                now+=1
            ans.append(temp)

        return ans