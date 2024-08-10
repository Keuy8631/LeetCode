class Solution:
    
    def regionsBySlashes(self, grid: List[str]) -> int:
        directions = [[0,1],[0,-1],[1,0],[-1,0]]
        m = len(grid)
        new_grid = [[0]*(m*3) for _ in range(m*3)]

        for i in range(m):
            for j in range(m):
                new_i = i*3
                new_j = j*3

                if grid[i][j] == "\\":
                    new_grid[new_i][new_j] = 1
                    new_grid[new_i+1][new_j+1] = 1
                    new_grid[new_i+2][new_j+2] = 1
                elif grid[i][j] == "/":
                    new_grid[new_i][new_j+2] = 1
                    new_grid[new_i+1][new_j+1] = 1
                    new_grid[new_i+2][new_j] = 1
        ans = 0

        for i in range(m*3):
            for j in range(m*3):
                if new_grid[i][j] == 0:
                    queue = [(i,j)]
                    new_grid[i][j] = 1
                    while queue:
                        now = queue.pop(0)
                        # print(now)
                        for d in directions:
                            new_i = d[0]+now[0]
                            new_j = d[1]+now[1]

                            if  new_i>=0 and new_j>=0 and new_j<m*3 and new_i<m*3 and new_grid[new_i][new_j] == 0:
                                new_grid[new_i][new_j] = 1
                                queue.append((new_i,new_j))
                    ans+=1

        return ans 
        