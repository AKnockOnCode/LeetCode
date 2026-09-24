int smallestIndex(int* nums, int numsSize) {
    int min = 1001;
    int i;
    int sum = 0, num = 0;
    for (i = 0; i < numsSize; i++){
        sum = 0;
        num = nums[i];
        while(num){
            sum += num%10;
            num /= 10;
        }
        if (i==sum){
            return i;
        }
    }
    return -1;
}