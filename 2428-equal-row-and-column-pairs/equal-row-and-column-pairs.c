int equalPairs(int** grid, int gridSize, int* gridColSize) {
    int row = gridSize, col = *gridColSize;
    if(row!=col) return 0;

    int col_table[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            col_table[i][j] = grid[j][i];
        }
    }

    // grid[i][k] col_table[j][k]
    int cnt = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            for(int k=0; k<col; k++){
                if(grid[i][k]==col_table[j][k] && k==col-1) cnt++;
                if(grid[i][k]!=col_table[j][k]) break;
            }
        }
    }

    return cnt;
}