int differenceOfSum(int* nums, int numsSize) {
    int esum = 0;
    int i;
    int dsum = 0;
    for (i=0;i<numsSize;i++){
        esum += nums[i];
    }
    for (i=0;i<numsSize;i++){
        while (nums[i]){
            dsum += nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return abs(esum-dsum);
}