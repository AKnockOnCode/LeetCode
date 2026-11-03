int minMoves(int* nums, int numsSize) {
    int max = 1;
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    int moves = 0;
    for (i = 0; i < numsSize; i++) {
        moves += max - nums[i];
    }
    return moves;
}