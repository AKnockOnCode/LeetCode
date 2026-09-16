/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int * arr = calloc (matrixSize, sizeof(int));
    int i, j;
    for (i=0; i<matrixSize;i++){
        for (j=0;j<matrixSize;j++){
            if (matrix[i][j])arr[i]++;
        }
    }
    *returnSize = matrixSize;
    return arr;
}