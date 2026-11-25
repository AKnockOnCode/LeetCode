int heightChecker(int* heights, int heightsSize) {
    int i, j = 0,expected[heightsSize], hash[101] = {0}, count = 0;
    for (i = 0; i < heightsSize; i++) {
        hash[heights[i]]++;
    }
    for (i = 1; i < 101; i++) {
        while (hash[i]--) {
            expected[j++] = i;
        }
    }
    for (i = 0; i < heightsSize; i++) {
        if (expected[i] != heights[i]) {
            count++;
        }
    }
    return count;
}