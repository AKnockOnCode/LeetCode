int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    return (x > y) - (x < y);
}

int maxCoins(int* piles, int pilesSize) {
    qsort(piles, pilesSize, sizeof(int), compare);
    int i, j, sum = 0;
    for (i = 0; i < pilesSize / 3; i++) {
        piles[i] = 0;
    }
    for (i = pilesSize - 1; i >= 0; i -= 2) {
        piles[i] = 0;
    }
    for (i = 0; i < pilesSize; i++) {
        sum += piles[i];
    }
    return sum;
}