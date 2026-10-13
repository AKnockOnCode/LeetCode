 int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x < y) - (x > y);
}
long long maxAlternatingSum(int* nums, int numsSize) {
   
int i;
long long score = 0;
for (i=0;i<numsSize;i++){
    nums[i]=abs(nums[i]);
}
qsort(nums, numsSize, sizeof(int), compare);
for (i=0;i<(numsSize+1)/2;i++){
    score += (long long)nums[i]*nums[i];
}
for (i=(numsSize+1)/2;i<numsSize;i++){
    score -= (long long)nums[i]*nums[i];
}
return score;
}