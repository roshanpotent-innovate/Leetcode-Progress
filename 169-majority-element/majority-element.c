int majorityElement(int* nums, int numsSize) {
    int count = 0, maj = 0;
    for(int i=0;i<numsSize;i++){
        if(count == 0){
            maj = nums[i];
        }
        if(nums[i] == maj){
            count++;
        }else{
            count--;
        }
    }
    return maj;
}