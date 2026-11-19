int sumOfUnique(int* nums, int numsSize) {
    int hash[101] = {0};
    int i, sum = 0;
    for (i = 0; i < numsSize; i++){
        hash[nums[i]]++;
    }
    for (i = 1; i < 101; i++){
        if (!--hash[i]){
            sum += i;
        }
    }
    return sum;
}