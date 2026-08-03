void moveZeroes(int* nums, int numsSize) {
    int nonzerocount = 0;
    int j = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] == 0){
            continue;
        }else{
            nums[j] = nums[i];
            nonzerocount++;
            j++;
        }
    }
    for(int i = nonzerocount; i<numsSize; i++){
        nums[i] = 0;
    }
}