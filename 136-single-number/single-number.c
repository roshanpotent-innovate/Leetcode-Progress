int singleNumber(int* nums, int numsSize) {
    int flag = 0;
    for(int i = 0;i<numsSize;i++){
        flag = flag ^ nums[i];
    }
    return flag;
}