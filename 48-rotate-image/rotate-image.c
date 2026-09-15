void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int r = matrixSize;
    int c = *matrixColSize;
    for(int i = 0; i<r; i++){
        for(int j = i+1; j<c; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i = 0; i<r; i++){
        int l = 0;
        int rx = r - 1;
        while(l<rx){
            int temp = matrix[i][l];
            matrix[i][l] = matrix[i][rx];
            matrix[i][rx] = temp;
            l++;
            rx--;
        }
    }
}