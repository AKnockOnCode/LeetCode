int sumOfSquares(int* nums, int numsSize) {
    int i, sum = 0;
    for (i=0;i<numsSize;i++){
        if (numsSize%(i+1)==0){
            sum += nums[i]*nums[i];
        }
    }
    return sum;
}