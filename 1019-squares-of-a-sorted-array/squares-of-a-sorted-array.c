#include <math.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int k = numsSize - 1;
    int* result = (int*)malloc(numsSize * sizeof(int));
    while(left <= right){
        if(abs(nums[left]) >= abs(nums[right])){
            result[k] = nums[left] * nums[left];
            left++;
            k--;
        }else if(abs(nums[left]) <= abs(nums[right])){
            result[k] = nums[right] * nums[right];
            right--;
            k--;
        }
    }
    *returnSize = numsSize;
    return result;
}