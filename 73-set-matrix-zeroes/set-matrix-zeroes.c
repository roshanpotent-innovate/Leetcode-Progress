void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int r = matrixSize;
    int c = *matrixColSize;
    int rows[r];
    int col[c];
    for(int i = 0; i<r;i++){
        rows[i] = 0;
    }
    for(int j = 0; j<c; j++){
        col[j] = 0;
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(matrix[i][j] == 0){
                rows[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0;i<r;i++){
        if(rows[i] == 1){
            for(int j = 0; j<c;j++){
                matrix[i][j] = 0;
            }
        }
    }
    for(int j = 0; j<c;j++){
        if(col[j] == 1){
            for(int i = 0; i<r; i++){
                matrix[i][j] = 0;
            }
        }
    }
}