int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxCoins(int* piles, int pilesSize) {
    qsort(piles, pilesSize, sizeof(int), cmp);
    int i, sum = 0;
    for (i = pilesSize / 3; i < pilesSize; i += 2) {
        sum += piles[i];
    }
    return sum;
}