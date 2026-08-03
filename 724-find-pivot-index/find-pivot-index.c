int pivotIndex(int* nums, int numsSize) {
    int leftsum = 0;
    int totalsum = 0, rightsum;
    for(int i = 0; i<numsSize; i++){
        totalsum = totalsum + nums[i];
    }
    for(int i = 0; i<numsSize; i++){
        rightsum = totalsum - nums[i] - leftsum;
        if(leftsum == rightsum){
            return i;
        }
        leftsum += nums[i];
    }
    return -1;
}