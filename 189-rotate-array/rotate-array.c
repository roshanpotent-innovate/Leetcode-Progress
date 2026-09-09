void rev(int* nums, int i, int j){
    while(i<j){
        int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
    i++;
    j--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k = k%numsSize;
    rev(nums, 0, numsSize - 1);
    rev(nums, 0, k - 1);
    rev(nums, k, numsSize - 1);
}