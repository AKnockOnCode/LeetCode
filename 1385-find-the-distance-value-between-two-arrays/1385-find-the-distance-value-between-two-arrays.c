int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size,
                         int d) {
    int elements = 0;
    int flag = 0;
    for (int i = 0; i < arr1Size; i++) {
        flag = 0;
        for (int j = 0; j < arr2Size; j++) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            elements++;
        }
    }
    return elements;
}