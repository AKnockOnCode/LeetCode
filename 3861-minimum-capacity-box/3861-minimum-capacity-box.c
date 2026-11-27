int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int min = 101, index = -1;
    for (int i = 0; i < capacitySize; i++) {
        if (capacity[i] >= itemSize && capacity[i] < min) {
            min = capacity[i];
            index = i;
        }
    }
    return index;
}