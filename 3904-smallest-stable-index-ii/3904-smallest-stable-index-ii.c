int firstStableIndex(int* nums, int numsSize, int k) {
    int min, max, i;
    min = nums[numsSize-1];
    max = nums[0];
    int arr[numsSize];
    for (i=numsSize-1;i>=0;i--){
        if (nums[i]<min){
            min = nums[i];
        }
        arr[i]=min;
    }
    for (i=0;i<numsSize;i++){
        if (nums[i]>max){
                max = nums[i];
            }
        if (max-arr[i]<=k){
            return i;
        }
    }
    return -1;
}