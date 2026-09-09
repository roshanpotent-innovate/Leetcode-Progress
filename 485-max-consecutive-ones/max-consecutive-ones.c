int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count = 0;
    int mcount = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] == 1){
            count++;
        }else{
            count = 0;
        }
        if(mcount < count){
            mcount = count;
        }
    }
    return mcount;
}