int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}
int findGCD(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(nums[0]), compare);
    int r = nums[0];
    int l = nums[numsSize - 1];
    int m;
    int max = 0;
    for(int i = 1; i<=r; i++){
        if(r%i == 0 && l%i == 0){
            m = i;
            if(m>max){
                max = m;
            }
        }
    }
    return max;
}