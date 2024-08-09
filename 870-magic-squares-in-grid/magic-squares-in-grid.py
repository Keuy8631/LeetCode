class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        ans = 0
        for i in range(m-2):
            for j in range(n-2):
                if self.check(i,j,grid):
                    ans+=1

        return ans

    def check(self,x,y,grid):
        goal = sum(grid[x][y:y+3])
        seen = [False] * 10
        for i in range(3):
            for j in range(3):
                num = grid[x + i][y + j]
                if num < 1 or num > 9:
                    return False
                if seen[num]:
                    return False
                seen[num] = True

        # print("goal:",goal,x,y)
        for i in range(3):
            if goal != sum(grid[x+i][y:y+3]):
                return False
            
            # print(grid[x][y+i]+grid[x+1][y+i]+grid[x+2][y+i])
            if goal != grid[x][y+i]+grid[x+1][y+i]+grid[x+2][y+i]:
                return False
        if goal != grid[x][y]+grid[x+1][y+1]+grid[x+2][y+2]:
            return False
        if goal != grid[x][y+2]+grid[x+1][y+1]+grid[x+2][y]:
            return False
        
        return True
    
            