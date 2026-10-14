int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    return (x > y) - (x < y);
}

int maxCoins(int* piles, int pilesSize) {
    qsort(piles, pilesSize, sizeof(int), compare);
    int i, sum = 0;
    for (i = pilesSize / 3; i < pilesSize; i += 2) {
        sum += piles[i];
    }
    return sum;
}