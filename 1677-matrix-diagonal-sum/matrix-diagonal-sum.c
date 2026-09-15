int diagonalSum(int** mat, int matSize, int* matColSize) {
    int r = matSize;
    int c = *matColSize;
    int sum = 0;
    int n = matSize;
    for(int i = 0;i<r;i++){
        for(int j = 0; j<c; j++){
            if(i == j){
                sum = sum + mat[i][j];
            }else if(i+j == n-1){
                sum = sum + mat[i][j];
            }
        }
    }
    return sum;
}