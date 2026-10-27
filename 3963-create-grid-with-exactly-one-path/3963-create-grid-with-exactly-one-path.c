/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** createGrid(int m, int n, int* returnSize) {
    char** arr = malloc(m * sizeof(char*));
    for (int i = 0; i < m; i++) {
        arr[i] = malloc((n + 1) * sizeof(char));
        for (int j = 0; j < n; j++) {
            if (i == m - 1 || j == 0) {
                arr[i][j] = '.';
            } else {
                arr[i][j] = '#';
            }
        }

        arr[i][n] = '\0';
    }
    *returnSize = m;
    return arr;
}