int minimumSumSubarray(int* nums, int numsSize, int l, int r) {
    int min = 100000;
    int sum = 0;
    int check, j, start;
    int flag = 1;
    for (int i = 0; i < numsSize; i++){
        check = r;
        j = i;
        sum = 0;
        start = 1;
        while(check-- && j < numsSize){
            sum += nums[j++];
            if (start >= l && sum < min && sum > 0){
                min = sum;
                flag = 0;
            }
            start++;
        }
    }
    if (flag) return -1;
    return min;
}