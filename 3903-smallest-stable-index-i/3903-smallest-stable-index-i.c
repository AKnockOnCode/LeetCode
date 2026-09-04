int firstStableIndex(int* nums, int numsSize, int k) {
    int min, max, j, i;
    for (i=0;i<numsSize;i++){
        min = nums[i];
        max = nums[i];
        for (j=i;j<numsSize;j++){
            if (nums[j]<min){
                min = nums[j];
            }
        }
        for (j=0;j<=i;j++){
            if (nums[j]>max){
                max = nums[j];
            }
        }
        if (max-min<=k){
            return i;
        }
    }
    return -1;
}