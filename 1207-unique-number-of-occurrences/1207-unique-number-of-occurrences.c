bool uniqueOccurrences(int* arr, int arrSize) {
    int hash[2001] = {0};
    for (int i = 0; i < arrSize; i++) {
        hash[arr[i] + 1000]++;
    };
    for (int j = 0; j < 2000; j++) {
        for (int k = j + 1; k < 2001; k++) {
            if (hash[j] && hash[j] == hash[k]) {
                return false;
            }
        }
    }
    return true;
}