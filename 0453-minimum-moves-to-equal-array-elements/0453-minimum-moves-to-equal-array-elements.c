int minMoves(int* nums, int numsSize) {
    int min = 1000000000;
    int i;
    int moves = 0;
    for (i = 0; i < numsSize; i++){
        if (nums[i] < min){
            min = nums[i];
        }
    }
    for (i = 0; i < numsSize; i++){
        moves += nums[i] - min;
    }
    return moves;
}