int equalPairs(int** grid, int gridSize, int* gridColSize) {
    int cnt = 0;
    int row = gridSize, col = *gridColSize;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            bool equal = true;
            for(int k=0; k<col; k++){
                if(grid[i][k]!=grid[k][j]){
                    equal = false;
                    break;
                }
            }
            if(equal) cnt++;
        }
    }
    return cnt;
}