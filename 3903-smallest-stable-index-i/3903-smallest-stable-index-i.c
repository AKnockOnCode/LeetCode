int firstStableIndex(int* nums, int numsSize, int k) {
    int n = numsSize;
    int min, max, j, i;
    for (i=0;i<n;i++){
        min = nums[i];
        max = nums[i];
        for (j=i;j<n;j++){
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