int sumCounts(int* nums, int numsSize) {
    int sum=0, count = 0, i, j, hash[101]={0};
    for (i=0;i<numsSize;i++){
        for (int k = numsSize-1;k>=i;k--){
        for (int m = 0; m < 101; m++) hash[m] = 0;
        count = 0;
        for (j=i;j<=k;j++){
            hash[nums[j]]++;
        }
        for (int l = 0;l<101;l++){
            if (hash[l]){
                count++;
            }
        }
        sum += count * count;
    }
    }
    return sum;
}