int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void sortArray(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
}

int minMoves2(int* nums, int numsSize) {
    int i;
    qsort(nums, numsSize, sizeof(int), compare);
    int med = nums[numsSize/2];
    long long moves = 0;
    for (i=0;i<numsSize;i++){
        moves += abs(nums[i]-med);
    }
    return moves;
}