int wiggleMaxLength(int* nums, int numsSize) {
    if(numsSize == 0){
        return 0;
    }
    int up = 1;
    int down = 1;
    for(int i = 1; i<numsSize; i++){
        if(nums[i] > nums[i-1]){
            up = down+1;
        }else if(nums[i] < nums[i-1]){
            down = up + 1;
        }
    }
    if(up>down){
        return up;
    }else{
        return down;
    }
}