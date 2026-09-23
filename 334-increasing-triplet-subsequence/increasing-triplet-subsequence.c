bool increasingTriplet(int* nums, int numsSize) {
    int fir = INT_MAX;
    int sec = INT_MAX;
    for(int i = 0; i<numsSize; i++){
        if(nums[i]<=fir){
            fir = nums[i];
        }else if(nums[i]<=sec){
            sec = nums[i];
        }else{
            return true;
        }
    }
    return false;
}