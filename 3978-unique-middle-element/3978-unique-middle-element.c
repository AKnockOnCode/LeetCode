bool isMiddleElementUnique(int* nums, int numsSize) {
    int mid = nums[numsSize/2];
    for (int i=0;i<numsSize;i++){
        if (i != numsSize/2 && nums[i]==mid){
            return false;
        }
    }
    return true;
}