/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int r = matrixSize;
    int c = matrixColSize[0];
    int *result = malloc(r * c * sizeof(int));
    int index = 0;
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;
    while (top <= bottom && left <= right) {
        for (int c = left; c <= right; c++) {
            result[index++] = matrix[top][c];
        }
        top++;
        for (int r = top; r <= bottom; r++) {
            result[index++] = matrix[r][right];
        }
        right--;
        if (top <= bottom) {
            for (int c = right; c >= left; c--) {
                result[index++] = matrix[bottom][c];
            }
            bottom--;
        }
        if (left <= right) {
            for (int r = bottom; r >= top; r--) {
                result[index++] = matrix[r][left];
            }
            left++;
        }
    }
    *returnSize = index;
    return result;
}
